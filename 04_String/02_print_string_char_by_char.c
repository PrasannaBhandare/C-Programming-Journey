//wap to print char by char string
#include<stdio.h>
int main()
{
char s[100];
printf("enter the string:\n");
scanf("%s",s);  //scanf("%[^\n]",s);
int i;
for(i=0;s[i];i++)
printf("%c",s[i]);
return 0;
}
