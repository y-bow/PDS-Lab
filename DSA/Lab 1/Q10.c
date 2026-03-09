#include <stdio.h>

int main()
{
    int arr[100], n, i, search, newElement, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &search);

    printf("Enter element to insert next to it: ");
    scanf("%d", &newElement);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {
            pos = i;
            break;
        }
    }

    if(pos == -1)
    {
        printf("Element not found");
    }
    else
    {
        for(i = n; i > pos + 1; i--)
            arr[i] = arr[i - 1];

        arr[pos + 1] = newElement;
        n++;

        printf("Array after insertion:\n");
        for(i = 0; i < n; i++)
            printf("%d ", arr[i]);
    }

    return 0;
}