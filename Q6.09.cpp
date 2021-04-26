//Write a C program to check whether a string is palindrome or not.
#include<stdio.h>
int main()
{
	char chrome[100];
	int i=-1,j,k,farm=0;
	printf("Enter a string: ");
	gets(chrome);
	while(chrome[++i] != '\0');
	for (j=0,k=i-1;j<k;j++,k--)
	{
		if(chrome[j]!=chrome[k])
			farm=1;
	}
	if (farm==0)
		printf("\nString is palindromic");
	else
		printf("\nString is not palindromic");
}
