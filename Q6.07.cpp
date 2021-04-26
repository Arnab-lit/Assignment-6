//Write a C program to count total number of words in a string.
#include<stdio.h>
int main()
{
	char pro[100];
	int i=0,count=1;
	printf("Enter a Sentence: ");
	gets(pro);
	for(i=0;i<pro[i];i++)
		if(pro[i]==' ' || pro[i]=='\n' || pro[i]=='\t' || pro[i]=='.')
			count++;
	printf("\nTotal numbers of Words: %d",count);
}
