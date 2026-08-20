#include <stdio.h>
int main()
{
   int a[5];
   int i,ele,secondLargest,largest;
   ele=sizeof(a)/sizeof(a[0]);
   printf("enter the array ele\n");
   for(i=0;i<ele;i++)
   scanf("%d",&a[i]);
   if(a[0]>a[1])
   {
    largest=a[0];
    secondLargest=a[1];
   }
   else
   {
    largest=a[1];
    secondLargest=a[0];
   }
   
   for(i=2;i<ele;i++)
   {
    //Case 1 — New element becomes largest
    
    if(a[i]>largest) //40 25 50
    {
       secondLargest=largest;     // 25? No! old largest is 40                                       
        largest=a[i];   //50
    }
    //Case 2 — New element is not largest, but bigger than second
    else if(a[i]>secondLargest)                    //largest = 50                                 
    {                               // second = 25  
        secondLargest=a[i];                     // a[i] = 40        
    }
  
   }
   printf("sencond largest=%d largest=%d ",secondLargest,largest);
   return 0;
}
