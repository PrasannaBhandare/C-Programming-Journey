#include<stdio.h>
int main()
{
    int a[5];
    int ele,i,index;
    index=0;
    ele=sizeof(a)/sizeof(a[0]);
    printf("enter the arr ele \n");
    for(i=0;i<ele;i++)
    scanf("%d",&a[i]);
    for(i=0;i<ele;i++)
    {
        int num=a[i];
        if(num%2==0)
        {
            a[index]=num;
            //printf("%d",a[index]);
            index++;
        }
    }
    printf("even arr ele \n");
    for(i=0;i<index;i++)
    printf("%d",a[i]);
    return 0;
}
