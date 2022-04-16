#include<iostream>
using namespace std;
int main()
{
    int n,j,k;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            j=i+1;
            k=i+2;
            while(k<=(n-1))
            {
                if((arr[i]+arr[j])==arr[k])
                {
                    cout<<(i+1)<<(j+1)<<(k+1)<<endl;
                    j++;
                    k++;
                }
                else if((arr[i]+arr[j])>arr[k])
                {
                    k++;
                }
                else{
                    j++;
                    if(j==k)
                    {
                        k++;
                    }
                }
            }
        }
    }
        return 0;
}
