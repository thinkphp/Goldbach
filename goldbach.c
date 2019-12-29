/*
 *
 * Author     : Adrian Statescu <mergesortv@gmail.com>
 * Description: Conjectura lui Goldbach
 *
 */
 
#include <stdio.h>
#include <math.h>
#define SIZE 100
 
int IsPrime(int n) {
 
    int i;
 
    if( n == 1 || n == 0) return 0;	
 
	for(i = 2; i <= sqrt( n ); ++i)
 
		if(n % i == 0)
 
			 return 0;
 
	return 1;
}
 
int main(int argc, char **argv) {
 
	int i, j, m, n, k;
 
	int mat[SIZE][SIZE];
 
	printf("%s\n","Matrix(m,n) -->>");
 
	scanf("%d %d", &m, &n);
 
	for(i = 0; i < m; ++i) {
 
		for(j = 0; j < n; ++j) {
 
			printf("mat[%d][%d] = ", i, j);
 
			scanf("%d", &mat[i][j]);
		}
	}
 
printf("Matrix -> \n");
 
for(i = 0; i < m; ++i) {
 
	    printf("\n");
 
		for(j = 0; j < n; ++j) {
 
			printf("%d ", mat[i][j]);		
		}
}
 
printf("\n");
 
for(i = 0; i < m; ++i) {
 
	for(j = 0; j < n; j++) {
 
		if(mat[i][j] % 2 == 0) {
 
		   printf("mat[%d][%d] = %d\n", i + 1, j + 1, mat[i][j]);
 
           for(k = 2; k <= mat[i][j]/2; ++k) {
 
           	   if(IsPrime(k) && IsPrime(mat[i][j] - k)) 
 
           	   	     printf("%d = %d + %d\n",mat[i][j],  k, mat[i][j] - k);
           } 
		}
	}
}
 
	return(0);
}