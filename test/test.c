#include <stdlib.h>
#include <stdio.h>

/**
 *Main-function that will calculate multiplication of two intgers of Argv
 *return int
**/

int main(int argc, char *argv[])
{
	int m1, m2;

	if(argc != 3)
	{
		printf("Error has occured \n");
		return (1);
	}

	m1=atoi(argv[1]);
	m2=atoi(argv[2]);
	printf("%d\n", m1*m2);
	return (0);
}
