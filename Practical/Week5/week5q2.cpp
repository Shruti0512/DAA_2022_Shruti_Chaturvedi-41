#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,key,t;
    cin>>t;
     vector<int>arr;
    for(int j=0;j<t;j++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        cin>>key;
        sort(arr.begin(),arr.end());
        int flag=1;
        for(int i=0;i<n;i++)
        {
            int j=(i+n)/2;
            do
            {
                if(i<j)
                {
                    if(arr[i]+arr[j]==key)
                    {
                        cout<<arr[i]<<" "<<arr[j]<<endl;
                        flag=0;
                        break;
                    }
                    else if(arr[i]+arr[j]<key)
                    {
                        j++;
                    }
                    else{
                        j--;
                    }
                }
            }while(arr[i]+arr[j]<=key);
        }
        if(flag==1)
        {
            cout<<"Sequence not found";
        }
        arr.clear();
    }
    return 0;
}