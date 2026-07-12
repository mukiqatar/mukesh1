#include <stdio.h>

int main()
{
    int a[10], n, i, sum = 0;

    printf("How many numbers do you want to enter (max 10)? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);

        sum = sum + a[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}