#include<stdio.h>

int main(){
	int a[9] = {88,112, 6467, 325, 878, 3, 77, 8, 99};
	// fill b and c as a
	//Task 1
	int b[2][2];
	b[0][0] = 88;
	b[0][1] = 112;
	b[1][0] = 6467;
	b[1][1] = 325;
	int c[2][2];
	c[0][0] = 878;
	c[0][1] = 3;
	c[1][0] = 77;
	c[1][1] = 8;
	//Task 2
	int d[100][100];
	 printf("Matrix d :\n");
	 for ( int i = 0; i <= 1; i++ ){
	 	for ( int j = 0;j <= 1; j++){
		printf("\t%d ", d[i][j]=b[i][j] * c[i][j]);
		}
		printf("\n");
	}
	return 0;
}


