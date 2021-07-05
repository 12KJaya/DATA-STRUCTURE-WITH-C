#include <stdio.h>

int main()
{
    int a[10],size,num,pos;
    printf("Enter the size fo array:");
    scanf("%d",&size);
    printf("Enter the array elements:");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("Enter the number you wants to insert:");
    scanf("%d",&num);
    printf("At which position you wants to insert the number:");
    scanf("%d",&pos);
    a[size]=num;
    size++;
    for(int i=0;i<size;i++)
    printf("%d",a[i]);
    return 0;
}
