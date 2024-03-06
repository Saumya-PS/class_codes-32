//reverse the string using Recursion
#include<stdio.h>
void rev(char*s);
int main()
{
  char s[10];
printf("Enter the elements of the string\n");
scanf("%s",&s);
printf("String is Reversed\n");
rev(s);
return 0;
}
void rev(char*s)
{
  if(*s)
{
rev(s+1);
printf("%c",*s);
  }
}
