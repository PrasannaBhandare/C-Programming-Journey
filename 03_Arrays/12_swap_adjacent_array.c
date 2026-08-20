#include <stdio.h>
int main()
{
 int a[5];
 int i,ele,temp;
 ele=sizeof(a)/sizeof(a[0]);
 printf("enter the array ele\n");
 for(i=0;i<ele;i++)
 scanf("%d",&a[i]);
 for(i=0;i<ele-1;i=i+2)
 {
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
 }
 printf(" ADJECENT SWAP ");
 for(i=0;i<ele;i++)
 printf("%d",a[i]);
 return 0;

}
