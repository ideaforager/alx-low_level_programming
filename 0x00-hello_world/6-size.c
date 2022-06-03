#include <stdio.h>
/**
 * main - prints size of data types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("size of char is=%i byte(s)\n", Sizeof(int));
	printf("size of int is=%i byte(s)\n", Sizeof(int));
	printf("size of long int is=%i byte(s)\n", Sizeof(long int));
	printf("size of long long int is=%i byte(s)\n", Sizeof(long long int));
	printf("size of float is=%i byte(s)\n", Sizeof(float));
	return (0);
}
