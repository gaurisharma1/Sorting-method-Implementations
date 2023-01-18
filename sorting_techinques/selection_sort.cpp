#include<iostream>
using namespace std;

//moving j and taking k to it and so on...
void selection(int a[],int n)
{
    int i,j,k,temp=0;

    for(int i=0;i<n-1;i++)
    {
        for(int j=k=i;j<n;j++)
        {
            if(a[k]>a[j])
            {
                k=j;
            }
        }
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selection(a,n);
    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<" ";
    }
}