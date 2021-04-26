//Write a C program to find length of a string.
#include<stdio.h>
main()
{
	int main = 0;
	char pro[1000];
	printf("Enter a Sentence: ");
	gets(pro);
	while(pro[main]!='\0')
		main++;
	printf("\nLength of the String is: %d",main);
}
