#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i;
    int *p;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid size!\n");
        return 1;
    }

    p = malloc((size_t)n * sizeof *p);

    if (p == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("Array elements = ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");

    free(p);
    return 0;
}
