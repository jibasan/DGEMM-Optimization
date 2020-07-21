//JEFFERSON IBASAN 
//CSE 140 PROJECT 3
//COLLABORATOR: RODERICK BUO

//REORDERING
void dgemm( int m, int n, float *A, float *C )
{
	for (int k = 0; k < n; k++) 
	{
		for (int j = 0; j < m; j++) 
		{
			for (int i = 0; i < m; i++) 
			{
				C[i + j * m] += A[i + k * m] * A[j + k * m];
			}
		}
     }  
}

/*
// UNROLLING
void dgemm(int m, int n, float *A, float *C)
{
	int i,j,k;
	for (i = 0; i < m; i++)
	{
		for (k = 0; k < n; k++)
		{
			for (j = 0; j < m; j++)
			{
				if (m % n == 0)
				{
					C[i + j * m] += A[i + k * m] * A[j + k * m];
					C[i + (j + 1) * m] += A[i + k * m] * A[(j + 1) + k * m];
					j++;
				}
				else
				{
					C[i + j * m] += A[i + k * m] * A[j + k * m];

				}
			}
		}
	}
}


*/
/*
//BLOCKING
void dgemm(int m, int n, float *A, float *C)
{
	int size = m;
	
	for (int i = 0; i < m; i += size)
	{
		for (int j = 0; j < m; j += size)
		{
			for (int k = 0; k < m; k += size)
			{
				for (int j2 = 0; j2 < size; j2++)
				{
					for (int k2 = 0; k2 < n; k2++)
					{
						for (int i2 = 0; i2 < size; i2++)
						{
							C[(i + i2) + (j + j2) * m] += A[(i + i2) + (k + k2) * m] * A[(j + j2) + (k + k2) * m];
						}
					}
				}
			}
		}
	}
}
*/