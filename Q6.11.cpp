//Write a C program to count frequency of each character in a string.
#include <stdio.h>
int main()
{
	char head[100];
	int i,len=-1,tail[26];
	printf("Enter any string: ");
	gets(head);
	while(head[++len]!='\0');
	for(i=0;i<26;i++)
		tail[i]=0;
	for(i=0;i<len;i++)
    {
		if(head[i]>='a' && head[i]<='z')
			tail[head[i] - 97]++;
		else if(head[i]>='A' && head[i]<='Z')
			tail[head[i] - 65]++;
	}
	printf("\nFrequency of all characters:\n");
	for(i=0;i<26;i++)
		if(tail[i]!=0)
			printf("Character '%c' = %d\n",(i + 97),tail[i]);
}
