#include<iostream>
using namespace std;
int main()
{
    int t,value,hole;
    cin>>t;
    int n,cs,cc,min;
    for(int k=0;k<t;k++)
    {
        cin>>n;
        cc=0,cs=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            min=i;
            for(int j=i+1;j<n;j++)
            {
                cc++;
                if(a[j]<a[min])
                {
                    min=j;
                }
            }
                swap(a[i],a[min]);
                cs++;
        }
        cout<<cc<<endl<<cs;
    }
}