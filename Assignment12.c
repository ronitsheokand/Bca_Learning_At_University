//Input marks of 10 students in an array and then find the student with maximum marks

#include<stdio.h>
int main()
{
    int a[10],max=0,i;
    printf("enter marks of 10 student");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
     for(i=0;i<10;i++)
     {
         if(a[i]>max)
         max=a[i];
     }
     printf("max number is %d",max);
    
    
}
