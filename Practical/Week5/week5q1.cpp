#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        char alpha[n];
        int arr[128]={0};
        for(int i=0;i<n;i++)
        {
            cin>>alpha[i];
            arr[alpha[i]]+=1;
        }
        int max=1,flag=1;
        char ch;
        for(int i=0;i<n;i++)
        {
            if(arr[alpha[i]]>max)
            {
                flag=0;
                ch=alpha[i];
                max=arr[alpha[i]];
            }
        }
        if(flag==1)
        {
            cout<<"No Duplicate"<<endl;
        }
        else{
            cout<<ch<<"-"<<max<<endl;
        }
    }
    return 0;
}