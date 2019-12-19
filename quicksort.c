#include<stdio.h>
void QuickSort(int [],int,int);
int Partition(int [],int,int);
void main()
{
    int a[10]={4,3,6,8,1,10,15,20,34,12};
    int low=0;int i;
    int high=9;
    QuickSort(a,0,9);
    printf("\nSorted array is :");
	for(i=0;i<9;i++)
		printf("%d ",a[i]);

}
void QuickSort(int a[],int low,int high)
{
    int k;
    if(low<high)
    {
        k=Partition(a,low,high);
        QuickSort(a,low,k-1);
        QuickSort(a,k+1,high);

    }
}
int Partition(int a[],int low,int high)
{
    int i=low;
    int j=high;
    int pivot=a[low];int t,t1;
    do
    {
        do
        {
           i++;
        }while(a[i]<pivot);
        do
        {
            j--;

        }while(a[j]>pivot);
        if(i<j)
        {
           t=a[i];
           a[i]=a[j];
           a[j]=t;
        }
    }while(i<j);

    t1=a[low];
    a[low]=a[j];
    a[j]=t1;
    return j;
}
