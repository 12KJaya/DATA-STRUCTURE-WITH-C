#include <stdio.h>

int main()
{
    int a[10],size,pos;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the elements of array:");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("From which position you want to delete:");
    scanf("%d",&pos);
    if(pos<=0||pos>size)
    {
        printf("Invalid Position");
    }
    else
    {
        for(int i=0;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
        size--;
        for(int i=0;i<size;i++)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}
