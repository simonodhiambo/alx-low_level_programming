#include <stdio.h>
/**
 * main - A program that prints the size of various computer type
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n",sizeof(char));
	printf("size of a int: %d byte(s)\n",sizeof(int));
        printf("size of a long int: %d byte(s)\n",sizeof(long int));
	printf("size of a lon long int: %d byte(s)\n",sizeof(long long int));
	printf("size of a float: %d byte(s)\n",sizeof(float));
	return (0);	
}
