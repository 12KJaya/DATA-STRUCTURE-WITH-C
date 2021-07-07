#include <stdio.h>

int main()
{
    int a[10],size,pos;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the elements of array:");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    size--;
        for(int i=0;i<size;i++)
        {
            printf("%d",a[i]);
        }
    return 0;
}
