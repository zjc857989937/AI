#include<stdio.h>
#include<string.h>
#include"BFS.cpp"


int main()
{
	int i, j;
	printf("�����ʼ������:\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &x[i][j]);
		}
	printf("����Ŀ�������:\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &y[i][j]);
		}
	printf("\n");
	bfs();
	for (i = 1; step / 4 != 0;)
	{
		step = step / 4;
		if (step != 0)
			i++;
	}
	printf("�ӳ�ʼ��Ŀ��һ����Ҫ%d��", i);
	return 0;
}



