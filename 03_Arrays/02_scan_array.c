#include <stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i,ele;
    ele=sizeof(a)/sizeof(a[0]);
    printf("enter the array ele.:\n");
    for(i=0;i<ele;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
   {
    printf("index=%d ele=%d ",i,a[i]);
    printf("\n");
   }
return 0;
}
