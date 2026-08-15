#include<stdio.h>
int main()
{
int ele;
printf("enter the number of eles:\n");
scanf("%d",&ele);
int a[ele]; //this is dynamic declaration
int i;
printf("enter the array ele.:\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
printf("-----------\n");
for(i=0;i<ele;i++)
{
    printf("%d",a[i]);
    printf("\n");
}
return 0;
}
