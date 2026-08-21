#include<stdio.h>
int main()
{
    int a[5];
    int ele,i,j,temp;
    ele=sizeof(a)/sizeof(a[0]);
    printf("enter the array ele\n");
    for(i=0;i<ele;i++)
    scanf("%d",&a[i]);
    for(i=0;i<ele-1;i++)
    {
        for(j=i+1;j<ele;j++)
        {
            if(a[i]>a[j])  
            {                  
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
     
    }
    for(i=0;i<ele;i++)
    
    printf(" %d",a[i]);
    return 0;
