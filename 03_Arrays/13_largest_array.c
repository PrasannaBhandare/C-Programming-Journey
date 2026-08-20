#include <stdio.h>
int main()
{
   int a[5];
   int i,ele,largest;
   ele=sizeof(a)/sizeof(a[0]);
   printf("enter the array ele\n");
   for(i=0;i<ele;i++)
   scanf("%d",&a[i]);
   largest=a[0];
   for(i=1;i<ele;i++)
   {
    
    if(a[i]>largest)
    {
        largest=a[i]; 
        //break; This exits the loop immediately after finding the first larger element, so the rest of the array is never checked.


    }
  
   }
   //for(i=0;i<ele;i++) You’re printing largest multiple times in a loop. If you just want the largest element, you should print it once after the loop.
   printf("%d",largest);
   return 0;
}
