#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a;
    float b,c;
    scanf("%d%f",&a,&b);
    c=b-a-0.50;
    if (a%5==0)
    {
        if (c>0)
        {
            printf ("%0.2f",c);
        }
        else
        {
        printf ("%0.2f",b);
        }
    }
    else
    {
        printf ("%0.2f",b);
    }
    return 0;
}
