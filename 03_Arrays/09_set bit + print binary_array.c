#include <stdio.h>

int main()
{
    int a[5];
    int i, bit, ele, pos;

    ele = sizeof(a) / sizeof(a[0]);

    printf("Enter bit position to set: ");
    scanf("%d", &bit);

    printf("Enter array elements:\n");
    for(i = 0; i < ele; i++)
        scanf("%d", &a[i]);

    printf("\nAfter setting bit %d:\n", pos);

   for(i = 0; i < ele; i++)
{
    a[i] = a[i] | (1 << bit);

    printf("decimal = %d binary = ", a[i]);

    for(pos = 31; pos >= 0; pos--)
    {
        printf("%d", (a[i] >> pos) & 1);
    }

    printf("\n");
}

    return 0;
}
