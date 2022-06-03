#include <stdio.h>
/**
 * main - prints size of data types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of char is=%i byte\n", sizeof(int));
	printf("Size of int is=%i byte\n", sizeof(int));
	printf("Size of long int is=%i byte\n", sizeof(long int));
	printf("Size of long long int is=%i byte\n", sizeof(long long int));
	printf("Size of float is=%i byte\n", sizeof(float));
	return (0);
}
