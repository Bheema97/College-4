#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selSort(int arr[],int p);

int main()
{
    clock_t t;
    int n=1000,rd_num;
    int max=1000;
    int ind=0;
    /*printf("Enter the no.of elements - \n");
    scanf("%d",&n);*/
    int arr[n];
    /*printf("Enter elements in the array - \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }*/
    for(int i=3000;i>2000;i--)
    {
        arr[ind]=i;
        ind++;
    }
    /*srand(time(0));
    for(int i=0;i<n;i++)
    {
        rd_num = rand() % (max + 1);
        arr[i]=rd_num;
    }*/
    t=clock();
    selSort(arr,n);
    /*for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }*/
    t=clock()-t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("\nTime taken - %lf\n",time_taken);
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
