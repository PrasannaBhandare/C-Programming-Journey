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
        for(j=0;j<ele-1-i;j++)
        {
            if(a[j]>a[j+1])  //If the left element is bigger than the right element, swap them.
            {                //accending order  
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
     
    }
    for(i=0;i<ele;i++)
    
    printf(" %d",a[i]);
    return 0;
}
