#include <stdio.h>
int main()
{
    int a[20],size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the elements in the array:");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("Array elements are:");
    for(int i=0;i<size;i++)
    printf("%d",a[i]);
    return 0;
}
