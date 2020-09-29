
void findkong(int a[3][3], int& m, int& n)
{
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			if (a[i][j] == 0)
			{
				m = i;
				n = j;
			}

		}


}
