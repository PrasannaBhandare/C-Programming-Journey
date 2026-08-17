#include<stdio.h>
int main()
{
    int a[5];
    int ele,i,reverse,digit,temp;
    ele=sizeof(a)/sizeof(a[0]);
    printf("enter the array elements:\n");
    for(i=0;i<ele;i++)
    scanf("%d",&a[i]);
    printf("palindrome check logic\n");
    for(i=0;i<ele;i++)
    {
    temp=a[i];
    reverse=0;
    while(temp>0)
    {
        digit=temp%10;
        reverse=reverse*10+digit;
        temp=temp/10;
    }
    if(a[i]==reverse)
    printf("palindrome=%d\n",a[i]);
    else
    printf("not palindrome=%d\n",a[i]);
    } 
    return 0;
}
