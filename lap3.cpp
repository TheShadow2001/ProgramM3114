#include<stdio.h>

int main(){
	int n;
	//Exercise 1 
	printf("Enter the number of exersice 1 in system 16: ");
	scanf("%x", &n);
	//Exercise 2
	printf("\nThe number in system 8: " );
	printf("%o", n);
	
	// Exercise 3
	printf("\nThe exercise 1 number in system 8: ");
	printf("%o", n);
	int n1;
	printf("\nThe number in the same numeral system shifted left by 3 bits : ");
	printf("%o", n1 = n<<3);
	
	// Exercise 4
	printf("\nThe number in system 16: " );
	printf("%x", n);
	printf("\nThe same number in the same number system after applying the bitwise negation operation :");
	printf("%x", ~n);
	
	
	//Exercise 5
	int n2;
	printf("\nEnter the number of exercise 5 in system 8 :");
	scanf("%o", &n2 );
	printf("\nThe result of the specified bit operation XOR :");
	printf("%o", n^n2);	
	
	
	return 0;
							
}

