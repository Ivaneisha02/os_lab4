#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int end (int a, int b);

int (*operation_ptr[5]) (int a, intb);
int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int operation;
	int opt1, opt2;
	int (*operation_ptr[]) (int, int) = {add, subtract, multiply, divide, end};
	
	while (1) {
		printf("first integer: ");
		scanf("%d", &opt1);
		printf("second integer: ");
		scanf("%d", &opt2);
		printf("operation: ");
		scanf("%d", &operation_ptr);
		printf("result = %d\n", ((*operation_ptr[operation]) (opt1, opt2)));
	}
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }
int end ( int a, int b) { exit(0);}