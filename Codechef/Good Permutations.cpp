#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t,n,i,j,count,ans,k,flag;
  cin>>t;
  while(t--)
  {
      ans=0;
      cin>>n>>k;
      int a[n],b[n];
      for(i=0;i<n;i++)
      {
       cin>>a[i];
       b[i]=i+1;
      }
      do{
          flag=0;
      for(i=0;i<n;i++)
      {
        if(a[i]!=0&&a[i]!=b[i])
        {
            flag=1;
            break;
        }
      }
      if(flag==1)
      continue;
      else
        {
          count=0;
          for(i=1;i<n;i++)
          {
              if(b[i]>b[i-1])
              count++;
          }
          if(count==k)
          {
              ans++;
          }
        }
      }while(next_permutation(b,b+n));
      cout<<ans<<endl;
  }
}
