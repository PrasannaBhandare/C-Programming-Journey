#include <stdio.h>
int main()
{
int a[5];
int i,ele,smallest,secondsmallest;
ele=sizeof(a)/sizeof(a[0]);
printf("enter array ele\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

    if(a[0]<a[1]) //10 20 5
    {
        smallest=a[0];
        secondsmallest=a[1];
    }
    else if(a[1]<a[0]) // 20 10 15
    {
        smallest=a[1];
        secondsmallest=a[0];
    }
for(i=2;i<ele;i++)
{
    if(a[i]<smallest)
    {
       secondsmallest =smallest;
       smallest=a[i];
    }
    else if(a[i]<secondsmallest)
    {
       secondsmallest=a[i];
    }
}
printf("smallest=%d secondsmallest=%d",smallest,secondsmallest);



 return 0;   
}
