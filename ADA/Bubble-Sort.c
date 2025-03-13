#include<stdio.h>
void bubSort(int arr[],int p);
void swap(int *a, int *b);

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
    bubSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
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
