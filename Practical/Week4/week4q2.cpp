#include<iostream>
using namespace std;
int partition(int,int,int []);
void quicksort(int l,int h,int arr[])
{
   if(l<h)
   {
       int j=partition(l,h,arr);
       quicksort(l,j,arr);
       quicksort(j+1,h,arr);
   }
}
int partition(int l,int h,int arr[])
{
    int pivot=arr[l];
    int i=l,j=h;
    while(i<j)
    {
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[l],arr[j]);
    return j;
}
int main()
{
   int t,n;
   cin>>t;
   for(int k=0;k<t;k++)
   {
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       quicksort(0,n,arr);
       for(int i=0;i<n;i++)
       {
           cout<<arr[i]<<" ";
       }
   }
   return 0;
}