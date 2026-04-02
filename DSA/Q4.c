#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[], int start, int end)
{
    int pivot = a[start];
    int i = start + 1;
    int j = end;
    while(i <= j)
    {
        while(i <= end && a[i] <= pivot)
            i++;
        while(a[j] > pivot)
            j--;
        if(i < j)
            swap(&a[i], &a[j]);
    }
    swap(&a[start], &a[j]);
    return j;
}
void quickSort(int a[], int start, int end)
{
    if(start < end)
    {
        int p = partition(a, start, end);

        quickSort(a, start, p - 1);
        quickSort(a, p + 1, end);
    }
}
int main()
{
    int n, i;
    printf("Enter the count of roll numbers : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the roll numbers of the students : ");
        scanf("%d", &a[i]);
    }
    quickSort(a, 0, n - 1);
    printf("Sorted Roll Numbers:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}