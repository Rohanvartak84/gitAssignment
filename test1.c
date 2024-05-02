#include <stdio.h>
int main() 
{
	int x = 5;
	int y = 0;
	int result = x / y; //floating point exception error because y=0 divisor is equal to 0(Program received signal SIGFPE, Arithmetic exception.)
	printf("Result: %d\n", result);
	return 0;
}

