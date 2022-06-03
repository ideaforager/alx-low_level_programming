#include <stdio.h>
/**
 * main - prints size of data types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char char_Type;
	int int_Type;
	long int int_Type;
	long long int long_long_int_Type;
	float float_Type;

	printf("Size of a char:%d byte\n", sizeof(char_Type));
	printf("Size of an int:=%d byte\n", sizeof(int_Type));
	printf("Size of a long int:=%d byte\n", sizeof(long_int_Type));
	printf("Size of a long long int :=%d byte\n", sizeof(long_long_int_Type));
	printf("Size of a float is=%d byte\n", sizeof(float_Type));
	return (0);
}					i
