#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll int t,n,k,i,j,max,sum;
    cin>>t;
    while(t--)
    {
        sum=0,max=0;
        cin>>n>>k;
        ll int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<=n-k;i++)
        {
            sum=0;
            for(j=i;j<i+k;j++)
            {
                sum+=a[j];
            }
            if(sum>max)
                max=sum;
        }
        cout<<max<<endl;
    }
    return 0;
}
