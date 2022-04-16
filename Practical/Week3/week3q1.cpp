#include<iostream>
using namespace std;
int main()
{
    int t,value,hole;
    cin>>t;
    int n,cs,cc;
    for(int j=0;j<t;j++)
    {
        cin>>n;
        cc=0,cs=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
            value=a[i];
            hole=i;
            while(hole>0 && a[hole-1]>value)
            {
                a[hole]=a[hole-1];
                hole=hole-1;
                cc++;
                cs++;
            }
            a[hole]=value;
            cs++;
        }
       cout<<cc<<endl<<cs<<endl;
    }
}