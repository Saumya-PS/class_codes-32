//find it's length using Recursion
#include<stdio.h>
int length(char*s);
int main()
{
  char s[10];
int l;
printf("Enter the elements of the string\n");
scanf("%s",s);
l=length(s);
printf("The length of the given string is %d\n",l);
return 0;
}
int length(char*s)
{
  if(*s=='\0')
{
return 0;
}
else
{
return 1+length(s+1);
}
}
  
