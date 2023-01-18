#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int partion(int a[],int l,int h)
{
    int pivot=a[l];
    int i=l,j=h;
    int temp;
    do{
        do{i++;}while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);
        if(i<j)
        swap(&a[i],&a[j]);
    }while(i<j);
    swap(&a[l],&a[j]);          
    return j;
}

void quicksort(int a[],int l,int h)
{
    int j;
    if(l<h)
    {
    j=partion(a,l,h);
    quicksort(a,l,j);
    quicksort(a,j+1,h);
    }
}
int main()
{
    int a[]={11,2,13,4,5,16,7,18,9,10,INT32_MAX};

    quicksort(a,0,10);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
}
