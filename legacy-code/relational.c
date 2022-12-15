#include<stdio.h>

int main()
{
	int n, x, y;
	// n is the 1st set, x is 2nd and y is 3rd
	printf("Relational Operator \n");
	printf("\nPlease Enter Three Sets of Numbers: \n");
	printf("\n Enter 1st set: ");
	scanf("%i", &n);
	printf("\n Enter 2nd set: ");
	scanf("%i", &x);
	printf("\n Enter 3rd set: ");
	scanf("%i", &y);
	printf ("\n");
	
	printf("\n Relationship Table \n");
	//equality operator
	printf("\n %d == %d = %d\n", n, x, n == x);
	printf(" %d == %d = %d\n", x, y, x == y);
	printf(" %d == %d = %d\n", y, n, y == n);
	
	//greater than operator
	printf("\n %d > %d = %d \n", n, x, n > x);
	printf(" %d > %d = %d \n", x, y, x > y);
	printf(" %d > %d = %d \n", y, n, y > n);
	
	//less than operator
	printf ("\n %d < %d = %d \n", n, x, n < x);
	printf (" %d < %d = %d \n", x, y, x < y);
	printf (" %d < %d = %d \n", y, n, y < n);
	
	//not equal operator
	printf ("\n %d != %d = %d \n", n, x, n != x);
	printf (" %d != %d = %d \n", x, y, x != y);
	printf (" %d != %d = %d \n", y, n, y != n);

	//greater than or equal to operator
	printf ("\n %d >= %d = %d \n", n, x, n >= x);
	printf (" %d >= %d = %d \n", x, y, x >= y);
	printf (" %d >= %d = %d \n", y, n, y >= n);
	
	//less than or equal to operator
	printf ("\n %d <= %d = %d \n", n, x, n <= x);
	printf (" %d <= %d = %d \n", x, y, x <= y);
	printf (" %d <= %d = %d \n", y, n, y <= n);
	return 0;
}
