#include <stdio.h>
int main() 
{
	int arr[5] = {1, 2, 3, 4, 5};
	for (int i = 0; i <= 5; i++) 
	{
		printf("%d ", arr[i]);		//there only 5 elements in array but we are iterating the loop 6 time.So thats why it print 0. 
	}
	printf("\n");
	return 0;
}
