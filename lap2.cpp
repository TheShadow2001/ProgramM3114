#include<stdio.h>
#include<math.h>
int main(){
	double a;
	
	printf("Enter  a : ");
	scanf("%lf", &a);
	
	double x= (sin(2*a) + sin(5 * a) - sin ( 3 * a) );
	double y= (cos(a) + 1 - pow(sin(2*a),2));
	
	double z1 = x / y;
	printf("\n z1 = %lf", z1);
	double z2 = 2 * sin(a);
	printf("\n z2 = %lf", z2);
	return 0;
	
	
	
}

