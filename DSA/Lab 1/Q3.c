#include <stdio.h>

int main()
{
    int arr[100], n = 0, value, i, choice;

    do
    {
        printf("Enter value to insert: ");
        scanf("%d", &value);

        arr[n] = value;
        n++;

        printf("Updated array:\n");
        for(i = 0; i < n; i++)
            printf("%d ", arr[i]);

        printf("\nInsert another element? (1=yes 0=no): ");
        scanf("%d", &choice);

    } while(choice == 1);

    return 0;
}