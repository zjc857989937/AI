
int judge(int a[3][3])     //�ж��Ƿ�ΪĿ������� 
{
	int i, j;
	int logo = 1;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			if (a[i][j] != y[i][j])
				logo = 0;
		}
	return logo;
}
