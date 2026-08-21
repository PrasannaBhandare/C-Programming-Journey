#include<stdio.h>
int main()
{
  char s[20];
  printf("Enter the string:\n");
  scanf("%s",s);
  //scanf("[^\n]",s);
  printf("string is:%s",s);
  return 0;
}
