#include<stdio.h>
int main()
{
    char s[20];
    int i;
    printf("enter the string:\n");
    scanf("%s",s);
for(i=0;s[i];i++);
{
//empty body 
}
/*
i=0
while(s[i])
{
i++;
}
*/
printf("length=%d",i);
}
