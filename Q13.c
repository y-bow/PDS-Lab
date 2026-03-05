#include <stdio.h>

int main()
{
    int marks[100], n, i, newMark;
    int temp;
    float sum = 0, avg;

    printf("Enter number of students: ");
    scanf("%d",&n);

    printf("Enter marks:\n");
    for(i=0;i<n;i++)
        scanf("%d",&marks[i]);

    printf("Enter new student mark to insert: ");
    scanf("%d",&newMark);

    marks[n] = newMark;
    n++;

    for(i=0;i<n;i++)
    {
        if(marks[i] < 40)
        {
            for(int j=i;j<n-1;j++)
                marks[j] = marks[j+1];
            n--;
            i--;
        }
    }

    for(i=0;i<n/2;i++)
    {
        temp = marks[i];
        marks[i] = marks[n-1-i];
        marks[n-1-i] = temp;
    }

    printf("Marks after operations:\n");
    for(i=0;i<n;i++)
        printf("%d ",marks[i]);

    for(i=0;i<n;i++)
        sum += marks[i];

    avg = sum / n;

    printf("\nClass Average = %.2f",avg);

    return 0;
}