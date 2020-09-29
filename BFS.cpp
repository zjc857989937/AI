#include <stdio.h>
#include <stdlib.h>
#include"data.h"
#include"struct.h"
#include"findblank.cpp"
#include"judge.cpp"
#include"swap.cpp"
int  bfs()
{
	int dir;
	lnode l, r, p;
	r = l = (lnode)malloc(sizeof(node));
	l->next = NULL;
	p = (lnode)malloc(sizeof(node));
	memcpy(p->m, x, sizeof(x));
	p->direct = 0;
	r->next = p; r = p;
	for (;;)
	{
		int a, b;
		int c[3][3];
		memcpy(c, l->next->m, sizeof(l->next->m));
		dir = l->next->direct;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
		findkong(c, a, b);
		if (a - 1 != -1 && dir != 2)      //上 
		{
			memcpy(c, l->next->m, sizeof(l->next->m));
			swap(c[a][b], c[a - 1][b]);
			p = (lnode)malloc(sizeof(node));
			memcpy(p->m, c, sizeof(c));
			p->direct = 1;
			r->next = p; r = p;
			step++;



		}
		else
		{
			step++;
			if (judge(p->m) == 1)
			{
				return 0;
			}
		}

		if (a + 1 != 3 && dir != 1)   //下 
		{
			memcpy(c, l->next->m, sizeof(l->next->m));
			swap(c[a][b], c[a + 1][b]);
			p = (lnode)malloc(sizeof(node));
			memcpy(p->m, c, sizeof(c));
			p->direct = 2;
			r->next = p; r = p;
			step++;
			if (judge(p->m) == 1)
				return 0;

		}
		else
		{
			step++;
			if (judge(p->m) == 1)
			{
				return 0;
			}
		}
		if (b - 1 != -1 && dir != 4)       //左 
		{
			memcpy(c, l->next->m, sizeof(l->next->m));
			swap(c[a][b], c[a][b - 1]);
			p = (lnode)malloc(sizeof(node));
			memcpy(p->m, c, sizeof(c));
			p->direct = 3;
			r->next = p; r = p;
			step++;
			if (judge(p->m) == 1)
			{
				return 0;
			}

		}
		else
		{
			step++;
			if (judge(p->m) == 1)
			{
				return 0;
			}
		}
		if (b + 1 != 3 && dir != 3)   //右 
		{

			memcpy(c, l->next->m, sizeof(l->next->m));
			swap(c[a][b], c[a][b + 1]);
			p = (lnode)malloc(sizeof(node));
			memcpy(p->m, c, sizeof(c));
			p->direct = 4;
			r->next = p; r = p;
			step++;
			if (judge(p->m) == 1)
				return 0;

		}
		else
		{
			step++;
			if (judge(p->m) == 1)
			{
				return 0;
			}
		}
		l = l->next;
		printf("下一层\n");
	}
}
