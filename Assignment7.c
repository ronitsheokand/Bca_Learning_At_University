//Write a code find the length of a string and its reverse equivalent without using readymade c functions

#include <stdio.h>

int main() {
  char str[] = "sagar garg";
  int l = 0,i;
  while (str[l] != '\0')
  {
    l++;
  }
  printf("Length of string is %d\n",l);
  
  char reserved[l];
  for (int i=0;i<l;i++) 
  {
    reserved[i] = str[l-1-i];
  }
  reserved[l] = '\0';
  printf("Reversed string is %s",reserved);

  return 0;
}
