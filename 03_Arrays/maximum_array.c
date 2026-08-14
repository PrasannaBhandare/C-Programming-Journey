#include <stdio.h>

int main()
{
    int a[5];
    int i, ele;

    ele = sizeof(a) / sizeof(a[0]);

    printf("Enter array elements:\n");

    for(i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int index = 0;

    for(i = 1; i < ele; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            index = i;
        }
    }

    printf("index = %d max = %d\n", index, max);

    return 0;
}
