#include<bits/stdc++.h>
using namespace std;
int main()
{
long int i,count=0,l;
char s[100000];
while(gets(s))
{
l=strlen(s);
for(i=0;i<l;i++)
    {
    if(s[i]=='"')
        {
        count=count+1;
        if(count%2==1)
            printf("``");
        else
            printf("''");
        }
    else
        printf("%c",s[i]);
    }
printf("\n");
}
return 0;
}
