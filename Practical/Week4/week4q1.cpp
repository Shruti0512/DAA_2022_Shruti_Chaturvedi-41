#include<iostream>
using namespace std;
void merge(int,int,int,int[]);
void mergesort(int l,int h,int arr[])
{
    if(l<h)
    {
        int mid=(l+h)/2;
        mergesort(l,mid,arr);
        mergesort(mid+1,h,arr);
        merge(l,mid,h,arr);
    }
}
void merge(int l,int mid,int h,int a[])
{
    int n1=mid-l+1;
    int n2=h-mid;
    int leftarr[n1],rightarr[n2];
    for(int i=0;i<n1;i++)
    {
        leftarr[i]=a[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        rightarr[i]=a[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(leftarr[i]<=rightarr[j])
        {
            a[k]=leftarr[i];
            i++;
        }
        else{
            a[k]=rightarr[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=leftarr[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=rightarr[j];
        j++;
        k++;
    }
}
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        mergesort(0,n-1,arr);
    }
    return 0;
}