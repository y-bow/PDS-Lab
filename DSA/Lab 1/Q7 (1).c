#include <stdio.h>

int main()
{
    int arr[100], temp[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
        temp[i]=arr[n-1-i];

    printf("Reversed array:\n");
    for(i=0;i<n;i++)
        printf("%d ",temp[i]);

    return 0;
}