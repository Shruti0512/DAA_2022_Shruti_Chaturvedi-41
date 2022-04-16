#include<iostream>
using namespace std;
int main()
{
    int t,key;
    cin>>t;
    int n;
    for(int j=0;j<t;j++)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        int l=0,h=n-1,flag=0,mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(key==arr[mid])
            {
                flag++;
                for(int i=mid-1;i>=0;i--)
                {
                    if(key==arr[i])
                    {
                        flag++;
                    }
                    else{
                        break;
                    }
                }
                for(int i=mid+1;i<n;i++)
                {
                    if(key==arr[i])
                    {
                        flag++;
                    }
                    else{
                        break;
                    }
                }
            }
            else if(key<arr[mid])
            {
                h=mid-1;
            }
            else{
                l=mid+1;
            }
            if(flag>0)
            {
                break;
            }
        }
        cout<<flag<<endl;
    }
    return 0;
}