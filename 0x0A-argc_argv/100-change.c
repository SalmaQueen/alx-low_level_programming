#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the min num of coins to make change for an amount of money
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	count = coin_count(count, atoi(argv[1]));
	printf("%d\n", count);
	return (0);
}

/**
 * coin_count - counts the min coins needed for change,
 * unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * @count: int to count coins
 * @num: argv[1] changed to int
 * Return: int
 */

//simiar to the below
// unsigned int make_change(int n)
// {
// 	int dp[n + 1];
// 	int i, j , coins[5] = { 1, 2, 5, 10, 25 };

// 	dp[0] = 1;
// 	for (i = 0; i < 5; i++)
// 	{
// 		for (j = coins[i]; j <= n; j++)
// 		{
// 			dp[j] += dp[j - coins[i]];
// 		}
// 	}
// 	return dp[n];
// }


unsigned int coin_count(unsigned int count, int num)
{
	unsigned int sum = 0;

	while (!(sum + 25 > (unsigned int)num))
	{
		sum += 25;
		count++;
	}
	while (!(sum + 10 > (unsigned int)num))
	{
		sum += 10;
		count++;
	}
	while (!(sum + 5 > (unsigned int)num))
	{
		sum += 5;
		count++;
	}
	while (!(sum + 2 > (unsigned int)num))
	{
		sum += 2;
		count++;
	}
	while (!(sum + 1 > (unsigned int)num))
	{
		sum += 1;
		count++;
	}
	return (count);
}
