typedef struct node
{
	int m[3][3];
	int direct;         //上一步方向 
	struct node* next;
}*lnode;


