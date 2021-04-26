//Write a C program to find total number of alphabets, digits or special character in a string.
#include<stdio.h>
main()
{
	int i,alph,digi,spec;
	i=-1;
	char pro[1000];
	printf("Enter a Sentence: ");
	gets(pro);
	while(pro[++i]!='\0')
	{
		if((pro[i]>='a' && pro[i]<='z')||(pro[i]>='A' && pro[i]<='Z'))
			alph++;
		else if(pro[i]>='0' && pro[i]<='9')
			digi++;
		else
			spec++;
	}
	printf("\nTotal Number of Alphabets: %d",alph-1);
	printf("\nTotal Number of Digits: %d",digi);
	printf("\nTotal Number of Special Char.: %d",spec);
}
