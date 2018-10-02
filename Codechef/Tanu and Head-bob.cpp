#include<stdio.h>
#include<string.h>
int main()
{
int t,i,f,b,p,n;
scanf("%d",&t);
while(t)
{
f=b=p=0;
scanf("%d",&n);
char s[n];
scanf("%s",s);
for(i=0;i<strlen(s);i++)
{
if(s[i]=='N')
p++;
else if(s[i]=='Y')
f++;
else
b++;
}
if(f==0 && b==0)
printf("NOT SURE\n");
else if(f==0 && b!=0)
printf("INDIAN\n");
else if(f!=0 && b==0)
printf("NOT INDIAN\n");
--t;
}
 
 
return 0;
 
}
