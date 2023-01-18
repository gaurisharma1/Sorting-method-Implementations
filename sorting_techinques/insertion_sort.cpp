#include<iostream>
using namespace std;

//jump from insert element to next place nd so on
void insert(int a[],int n)
{
    int x;
    for(int i=1;i<n;i++)
    {
        x=a[i];
        int j=i-1;
        while(j>=-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
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
    insert(a,n);
    for(int i=0;i<n;i++)
    {
       cout<<a[i];
    }
}