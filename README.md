# DGEMM-Optimization
Making the fastest matrix multiplication program as possible for all machines.

The matrix is column major. Naïve implementation is given in dgemm-naive.c and you can run the bench-naive to see the output. 
void dgemm( int m, int n, float *A, float *C ) 
{   for( int i = 0; i < m; i++ )     
for( int k = 0; k < n; k++ ) 
for( int j = 0; j < m; j++ )
C[i+j*m] += A[i+k*m] * A[j+k*m]; 
} 

C is where the result is stored and we are doing all the calculations from just one matrix, A. You are required to do all the calculations and no optimization is allowed on this front to make benchmarking easier. Zip contains the following files : 
Makefile: to make and benchmark 
benchmark.c: do not modify. It check results and produce performance numbers 
dgemm-naive.c: naïve implementation as shown above 
dgemm-optimize.c: your optimization 
