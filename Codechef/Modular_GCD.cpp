#include<bits/stdc++.h>
 
using namespace std;
 
unsigned long long int modularExponentiation(unsigned long long int ,unsigned long long int ,unsigned long long int );
 
unsigned long long int GCD(unsigned long long int , unsigned long long int );
 
int main(){
 
unsigned long long int t,i;
 
cin>>t;
 
for(i=0;i<t;i++){
 
    unsigned long long int a,b,n,c;
 
    cin>>a>>b>>n;
 
    unsigned long long int an,bn,sn,d;
 
              
 
    if(a==b){
 
     an=modularExponentiation(a,n,1000000007);
 
     bn=modularExponentiation(b,n,1000000007);
 
     sn=(an%1000000007+bn%1000000007)%1000000007;
 
     cout<<(sn%1000000007)<<endl;
 
     
 
    }
 
    else{
 
     c=abs(a-b);
 
     an=modularExponentiation(a,n,c);
 
     bn=modularExponentiation(b,n,c);
 
     long long int d1=GCD(an,c);
     long long int d2=GCD(bn,c);
      d=(d1+d2);
      long long int d3=GCD(d,c);
 
     cout<<(d3%1000000007)<<endl;
 
    }
 
}
 
return 0;
 
}
 
unsigned long long int modularExponentiation(unsigned long long int x,unsigned long long int n,unsigned long long int M)
 
{
 
if(n==0)
 
return 1;
 
else if(n%2 == 0)
 
return modularExponentiation((x*x)%M,n/2,M);
 
else 
 
return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;
 
}
 
unsigned long long int GCD(unsigned long long int A,unsigned long long int B) {
 
if(B==0)
 
return A;
 
else
 
return GCD(B, A % B);
 
} 
