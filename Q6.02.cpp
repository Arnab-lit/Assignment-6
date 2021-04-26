//Write a C program to copy one string to another string.
#include<stdio.h>
int main()
{
	char copy[100],me[100];
	int i=-1;
	printf("Enter a Sentance: ");
	gets(copy);
	while(copy[++i]!='\0')
		me[i] = copy[i];
	printf("\nInitial: %s",copy);
	printf("\n\nAfter copy: %s",me);
}
