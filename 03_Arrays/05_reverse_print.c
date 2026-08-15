#include <stdio.h>
int main()
{
 int a[5];
 int i,ele;
 ele=sizeof(a)/sizeof(a[0]);
 printf("enter the array elements:\n");
 for(i=0;i<ele;i++)
 scanf("%d",&a[i]);
printf("Array ele in Reverse \n");
 for(i=ele-1;i>=0;i--)
{
  printf("index=%d ele=%d ",i,a[i]);
   printf("\n");
}
return 0;
}
