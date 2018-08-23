#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
	long long int t,count1=0,count2=0,i,m,n;
	char s[6];
	cin>>s;
	t=strlen(s);
	for(i=0;i<t;i++)
	{
	    if(s[i]=='*')
	    {
	        if(i%2==0)
	        count1++;
	        else
	        count2++;
	    }
	}
	m=pow(21,count1);
	n=pow(5,count2);
	cout<<m*n<<endl;
	return 0;
}
