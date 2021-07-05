#include <stdio.h>
int main()
{
    int a[20],size,num,pos;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the array elements:");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("Enter the number you wants to insert:");
    scanf("%d",&num);
    printf("At which position you want to insert the number:");
    scanf("%d",&pos);
    if(pos<=0||pos>=size-1)
    {
        printf("Invalid Position");
    }
    else
    {
        for(int i=size-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=num;
        size++;
    }
    for(int i=0;i<size;i++)
    printf("%d\n",a[i]);
    return 0;
}
