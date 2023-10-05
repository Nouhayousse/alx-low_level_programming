#include<stdio.h>
#include<stdlib.h>
/**
  * main - A program that prints a link using puts
  *
  *Description: prints programming is like building a multilingual
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	printf("size of char: %lu byte(s) \n",sizeof(char));
	printf("size of int: %lu byte(s) \n",sizeof(int));
	printf("size of long: %lu byte(s) \n",sizeof(long int));
	printf("size of long long: %lu byte(s)\n",sizeof(long long int));
	printf("size of float: %lu byte(s) \n",sizeof(float));
        return 0;
}
