#include<stdio.h>
void QuickSort(int [],int,int);
int Partition(int [],int,int);
void main()
{
    int ar[10]={4,3,6,8,1,10,15,20,34,12};
    int low=0;int i;
    int high=9;
    QuickSort(ar,0,9);
    printf("\nSorted array is :");
	for(i=0;i<9;i++)
		printf("%d ",ar[i]);

}
void QuickSort(int ar[],int low,int high)
{
    int kelement;
    if(low<high)
    {
        kelement=Partition(ar,low,high);
        QuickSort(ar,low,kelement-1);
        QuickSort(ar,kelement+1,high);

    }
}
int Partition(int ar[],int low,int high)
{
    int i=low;
    int j=high;
    int pivot=ar[low];int t0,t1;
    do
    {
        do
        {
           i++;
        }while(ar[i]<pivot);
        do
        {
            j--;

        }while(ar[j]>pivot);
        if(i<j)
        {
           t0=ar[i];
           ar[i]=ar[j];
           ar[j]=t0;
        }
    }while(i<j);

    t1=ar[low];
    ar[low]=ar[j];
    ar[j]=t1;
    return j;
}
