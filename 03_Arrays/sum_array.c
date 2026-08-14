#include <stdio.h>

int main()
{
    int a[5];
    int i, ele;
    int sum = 0;

    ele = sizeof(a) / sizeof(a[0]);

    printf("Enter array elements:\n");

    for(i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < ele; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
