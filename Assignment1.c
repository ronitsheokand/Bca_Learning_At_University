//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

#include<stdio.h>
int main()
{
	int i,p=0,n=0,j,s;
	printf("Enter a number of inputs: ");
	scanf("%d",&j);
	for(i=0;i<j;i++)
	{
		scanf("%d",&s);
		if(s>0)
		{
			p+=1;
		}
		else
		{
			n+=1;
		}
	}
	printf("Number of positive number are: %d\n",p);
	printf("Number of negative number are: %d",n);
}
