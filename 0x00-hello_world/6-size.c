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
	printf("size of char : %lu byte \n",sizeof(char));
	printf("size of int : %lu byte \n",sizeof(int));
	printf("size of long : %lu byte \n",sizeof(long int));
	printf("size of long long : %lu byte \n",sizeof(long long int));
	printf("size of float : %lu byte \n",sizeof(float));
        return 0;
}
