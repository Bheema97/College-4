//DISCLAIMER : Does not work for duplicates yet
#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b);
int partition(int arr[], int low, int high);
void quicksort(int arr[],int low, int high);

int main()
{
    int arr[] = {9,6,2,14,11,7,4,1,16};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}


int partition(int arr[], int low, int high)
{
    int p=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=p)
        {
            i++;
        }
        while(arr[j]>p)
        {
            j--;
        }
        swap(&arr[i],&arr[j]);
    }
    swap(&arr[i],&arr[j]);
    swap(&arr[low],&arr[j]);
    return j;
}
void quicksort(int arr[],int low, int high)
{
    int s;
    if(low<high)
    {
        s=partition(arr,low,high);
        quicksort(arr,low,s);
        quicksort(arr,s+1,high);
    }
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
