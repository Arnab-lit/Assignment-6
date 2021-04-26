//Write a C program to find first occurrence of a character in a given string.
#include<stdio.h>
int main()
{
	char chrome[100],cast;
	int i,flag = 0,n=-1;
	printf("Enter a string: ");
	gets(chrome);
	printf("\nEnter the character to search: ");
	scanf("%c",&cast);
	while(chrome[++n]!='\0');
	for(i=0;i<n;i++)
	{
		if(chrome[i]==cast)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
		printf("\nCharacter %c first found at position: %d",cast, i+1);
	else
		printf("Not Found");
}
