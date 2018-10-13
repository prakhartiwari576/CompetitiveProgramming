#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
        int x,y,i,n,l,k,m,flag=0;
 cin>>n;
 int a[n];
 int b[n];

 for(int c=0;c<n;c++){
    cin>>a[c];


 }
 for(k=0;k<n;k++){
    cin>>b[k];
 }
 for(i=0;i<n-2;i++){
    if(a[i]<b[i]){
        a[i]=a[i]+1;
        a[i+1]=a[i+1]+2;
        a[i+2]=a[i+2]+3;
    }
 }

   for(m=0;m<n;m++){

        if(a[m]!=b[m])
       {
       	   flag=1;
        break;
        }

    }
    if(flag==0)
        cout<<"TAK"<<endl;
        else
        cout<<"NIE"<<endl;
 }
return 0;
}

