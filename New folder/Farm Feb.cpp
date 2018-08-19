#include <iostream>
using namespace std;

int main() 
{
    long long int t,x,y,i,j,k,count,num;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        num=x+y;
        for(i=num+1;;i++)
        {
            j=2;
            while(j<=i)
            {
                if(i%j==0)
                {
                    break;
                }
                else
                j++;
            }
            if(i==j)
            {
                break;
            }
        }
        count=i-num;
        cout<<count<<endl;
    }
	return 0;
}
