#include<stdio.h>
int main()
{
    int a[5];
  
    int ele,i;
     printf("enter the array ele \n");  
    ele=sizeof(a)/sizeof(a[0]);
    for(i=0;i<ele;i++)
    scanf("%d",&a[i]);
    printf("even ele. in given array \n");
    for(i=0;i<ele;i++)
    {
        if(a[i]%2==0)
        {
        printf("even ele.=%d\n",a[i]);
        }
      
    }
    return 0;
}
