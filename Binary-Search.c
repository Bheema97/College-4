#include<stdio.h>
void bubSort(int arr[],int p);
void swap(int *a, int *b);
int binsearch(int arr[],int low,int high, int x);

int main()
{
    int n,num,elem;
    printf("Enter the no.of elements - \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in the array - \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\nEnter number to search for - ");
    scanf("%d",&num);
    elem=binsearch(arr,0,n-1,num);
    if(elem==-1)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n",elem);
    return 0;
}

void bubSort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        for(int j=0;j<=n-2-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int binsearch(int arr[],int low,int high, int x)
{
    while(low<=high)
    {
        int mid=low+((high-low)/2);
        if(arr[mid]==x)
            return mid;
        if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
