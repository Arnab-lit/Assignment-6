//Write a C program to compare two strings.
#include<stdio.h>
int comp(char both[],char same[])
{
	int i=0;
	while(both[i]==same[i])
	{
		if(both[i]=='\0' || same[i]=='\0')
			break;
		i++;
	}
	if(both[i]=='\0' && same[i]=='\0')
		return 0;
	else
		return -1;
}
int main()
{
	char com[100],pare[100];
	printf("Enter a sentence: ");
	gets(com);
	printf("Enter another sentence: ");
	gets(pare);
	if(comp(com,pare)==0)
		printf("\n  Both are same");
	else
		printf("\n  Both are not same");
}
