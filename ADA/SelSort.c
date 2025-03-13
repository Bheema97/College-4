#include<stdio.h>

void selSort(int arr[],int p);

int main()
{
    int n;
    printf("Enter the no.of elements - \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in the array - \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

void selSort(int arr[],int p)
{
    int min;
    for(int i=0;i<p-1;i++)
    {
        min=i;
        for(int j=i+1;j<p;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
