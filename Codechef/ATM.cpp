#include <iostream>
 
int main()
{
    int a;
    float b,c;
    cin>>a>>b;
    c=b-a-0.50;
    if (a%5==0)
    {
        if (c>0)
        {
            cout<<c;
        }
        else
        {
     cout<<b;
        }
    }
    else
    {
       cout<<b;
    }
    return 0;
}
