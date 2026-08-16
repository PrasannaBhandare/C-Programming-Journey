#include<stdio.h>
int main()
{
int a[5];
int ele,i,j;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array ele:\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

for(i=0;i<ele;i++)
{
    int flag=0;
    if(a[i]==1)
    printf("not prime=%d\n",a[i]);
    else
    {
    for(j=2;j<a[i];j++)
    {
        if(a[i]%j==0)
        {
            flag=1;
            break;
        }
    }
      if(flag==0)
    printf("it is prime=%d\n",a[i]);
    }
   
}
return 0;
}
