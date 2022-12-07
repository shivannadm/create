#include<stdio.h>
#include<stdlib.h>

void create(int arr[],int n)
{
    int i;
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display(int arr[],int n)
{
    int i;
    printf("The array elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int choice,n,arr[10],count=0;
    while(1)
    {
        printf("\n\nEnter the number of elements: ");
        scanf("%d",&n);
        printf("\n\nSelect your choice,\n 1.Create array\n 2.Display array\n 3.Exit\n\n\nYour choice (1-3): ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: create(arr,n);
                    count++;
                    break;
            case 2: if(count!=0)
                        display(arr,n);
                    else
                        printf("Array is not yet created.");
                    break;
            case 3: exit(0);
                    break;
            default: printf("Invalid input.");

        }

    }
    return 0;

}
