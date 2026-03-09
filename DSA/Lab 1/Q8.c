#include <stdio.h>

int main()
{
    int arr[100], n, k, i, temp;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter K value: ");
    scanf("%d",&k);

    for(i=0;i<k/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[k-1-i];
        arr[k-1-i]=temp;
    }

    printf("Array after reversing first K elements:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}