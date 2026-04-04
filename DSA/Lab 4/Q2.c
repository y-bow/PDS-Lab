#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of items : ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the price of the item : ");
        scanf("%d", &a[i]);
    }

    int i, j, min, temp;
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("The item's price in ascending order is : ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}