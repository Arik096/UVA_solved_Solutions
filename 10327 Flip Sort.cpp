#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,j,a[1050],ans,t;
while(scanf("%d",&n)==1)
{
ans=0;
for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
for(i=1;i<n;i++)
    for(j=n-1;j>=i;j--)
        if(a[j-1]>a[j])
            {
            t=a[j-1];
            a[j-1]=a[j];
            a[j]=t;
            ans=ans+1;
            }
printf("Minimum exchange operations : %d\n",ans);
}
return 0;
}
