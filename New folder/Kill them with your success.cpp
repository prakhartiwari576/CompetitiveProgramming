#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        double ans =(double)a[0];
        for(i=1;i<n;i++)
        {
            ans=(ans+a[i])/2;
        }
        cout<<fixed;
        cout<<setprecision(8)<<ans<<endl;
    }
    return 0;
}
