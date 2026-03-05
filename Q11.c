#include <stdio.h>

int main()
{
    int arr[100], n, i, element, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to count: ");
    scanf("%d", &element);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == element)
            count++;
    }

    printf("Element appears %d times", count);

    return 0;
}