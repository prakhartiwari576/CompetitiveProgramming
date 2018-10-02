#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() 
{
	ll t,i,j,k,count,n;
	cin>>t;
	while(t--)
	{
	  cin>>n>>k;
	  ll int a[n];
	  for(i=0;i<n;i++)
	  {
	      cin>>a[i];
	  }
	  for(i=0;i<n;i++)
	  {
	      if(a[i]<=k)
	      {
	          k=k-a[i];
	          cout<<"1";
	      }
	      else
	      {
	          cout<<"0";
	      }
	  }
	  cout<<endl;
	}
	return 0;
}

