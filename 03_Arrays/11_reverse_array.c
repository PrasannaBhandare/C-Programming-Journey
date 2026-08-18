#include <stdio.h>

int main()
{
    int a[5];
    int ele, i, j, temp;

    ele = sizeof(a) / sizeof(a[0]);

    printf("Enter array elements:\n");

    for(i = 0; i < ele; i++)
        scanf("%d", &a[i]);

    /*i = 0;
    j = ele - 1;

    while(i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }
    */
    for(i=0,j=ele-1;i<j;i++,j--)
    {
         temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("Reversed array:\n");

    for(i = 0; i < ele; i++)
        printf("%d ", a[i]);

    return 0;
}
