#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n1,n2;
   cin>>n1;
   vector<int>v1,v2;
   for(int i=0;i<n1;i++)
   {
       int temp;
       cin>>temp;
       v1.push_back(temp);
   }
   sort(v1.begin(),v1.end());
   int arr[v1[n1-1]+1]={0};
   for(int i=0;i<n1;i++)
   {
       arr[v1[i]]=1;
   }
   cin>>n2;
   for(int i=0;i<n2;i++)
   {
       int temp;
       cin>>temp;
       v2.push_back(temp);
       if(arr[temp]==1)
       {
           cout<<temp<<" ";
       }
   }
   return 0;
}