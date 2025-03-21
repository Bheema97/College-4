#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bubSort(int arr[],int p);
void swap(int *a, int *b);

int main()
{
    clock_t t;
    int n,rd_num;
    int max=1000;
    printf("Enter the no.of elements - \n");
    scanf("%d",&n);
    int arr[n];
    /*printf("Enter elements in the array - \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }*/
    for(int i=0;i<n;i++)
    {
        rd_num = rand() % (max + 1);
        arr[i]=rd_num;
    }
    t=clock();
    bubSort(arr,n);
    /*printf("\nAfter sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }*/
    t=clock()-t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("\nTime taken - %lf\n",time_taken);
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
