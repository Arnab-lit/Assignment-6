//Write a C program to convert lowercase string to uppercase.
#include<stdio.h>
void Pro(char me[])
{
	int i;
	i=-1;
	while(me[++i]!='\0')
		if(me[i]>='a' && me[i]<='z')
			me[i] = me[i]-32;
}
int main()
{
	char all[100];
	printf("Enter a Miscellaneous Sentence: ");
	gets(all);
	Pro(all);
	printf("\nArranged Sentence: %s",all);
}
