//Write a C program to concatenate two strings.
#include<stdio.h>
void Concat(char win[],char loss[])
{
	int i,j;
	i=-1;
	while(win[++i]!='\0');
	j=-1;
	while(loss[++j]!='\0')
		win[i++]=loss[j];
}
int main()
{
	printf("Left a 'SPACE' after 1st sentence");
	char full[100],size[100];
	printf("\n\nEnter a incomplete sentence: ");
	gets(full);
	printf("Enter incomplete sentence here: ");
	gets(size);
	Concat(full,size);
	printf("\nComplete Sentence: %s",full);
}
