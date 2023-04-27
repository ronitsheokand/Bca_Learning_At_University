//Write a C code to sort a string in alphabetical order
//input: Anitha
//output: Aahint 

#include <stdio.h>
#include <string.h>

int main()
{
   char str[100];
   int i, j, n;
   char temp;

   printf("Enter a string: ");
   scanf("%s",&str[0]);
   n=strlen(str);

   for (i=0;i<n-1;i++)
   {
      for (j=i+1;j<n;j++)
      {
         if(str[i]>str[j])
         {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
         }
      }
   }
   printf("\nSorted string is: %s", str);
   return 0;
}
