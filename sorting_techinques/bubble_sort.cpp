#include<iostream>
using namespace std;
//10 40 20 50 30 
void bubble(int a[],int n)
{
    int temp,flag=0;
    for(int i=0;i<n-1;i++)//for passes.....
    {
        for(int j=0;j<n-i-1;j++)//for comparisions...
        {
            flag=1;//use flag for improved binary search....
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        if(flag==0)
        break;
       
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
    bubble(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}