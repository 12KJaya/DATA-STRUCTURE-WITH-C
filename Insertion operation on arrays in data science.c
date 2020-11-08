#include<stdio.h>
int main()
{
	int a[20],size,num,i,pos;
	printf("Enter the size of the array=");
	scanf("%d",&size);
	printf("Enter the elements of the array=");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	//Traversal
	printf("Entered elements are:");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	//Insertion at specific position
	printf("Enter the element you want to insert=\n");
	scanf("%d",&num);
	printf("Enter the position\n");
	scanf("%d",&pos);
	for(i=size-1;i>pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=num;
	size++;
	printf("element in array are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	//Insertion at beginning
	printf("Enter the element you want to enter:");
	scanf("%d",&num);
	for(i=size-1;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=num;
	size++;
	printf("elements in array are:\n");
	for(i=0;i<size;i++)
	printf("%d\n",a[i]);
	//Insertion at end
	printf("Enter the element you want to enter:");
	scanf("%d",&num);
	a[size]=num;
	size++;
	printf("elements in array are:\n");
	for(i=0;i<size;i++)
	printf("%d\n",a[i]);
	return 0;
}


