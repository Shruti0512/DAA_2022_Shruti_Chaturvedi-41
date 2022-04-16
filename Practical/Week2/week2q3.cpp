#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,key;
    cin>>t;
    vector<int>arr;
    for(int i=0;i<t;i++)
    {
         cin>>n;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        cin>>key;
        int count=0;
        if((arr[n-1]-arr[0])>=key)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=n-1;j>i;)
                {
                    if(arr[j]-arr[i]==key)
                    {
                        count++;
                        break;
                    }
                    else if(arr[j]-arr[i]>key)
                    {
                        j--;
                    }
                    else{
                        break;
                    }
                }
            }
            if(count==0)
            {
                cout<<"key not found";
            }
            else{
                cout<<count;
            }
        }
        else{
            cout<<"key not found";
        }
        arr.clear();
    }
   
    return 0;
}
