//Write a C program to find reverse of a string.
#include<stdio.h>
int main()
{
	char mail[100],sent[100];
	int i,j,k=-1;
	printf("Enter a Sentence: ");
	gets(mail);
	while(mail[++k]!='\0');
	j = k-1;
	for(i=0;i<k;i++)
		sent[i] = mail[j--];
	sent[i]='\0';
	printf("\nReversed Sentence: %s",sent);
}
