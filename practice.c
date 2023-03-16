#include <stdio.h>
#include <stdlib.h>

/**
  *main-function that will help in malloc
  *Return(0)-success
**/

int main(void)
{
	int n;

	printf("enter a digit:");
	scanf("%d", &n);

	int *ptr = (int *) malloc(n * sizeof(int));

	int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = i + 1;
		printf("%d\n", ptr[i]);
	}

	return (0);

}
