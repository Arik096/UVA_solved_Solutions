#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,j=1;
          while(cin>>n&&n!=0)
          {
                    int a[n],sum=0,count=0;
                    for(int i=0;i<n;i++)
                    {
                              cin>>a[i];
                              sum=sum+a[i];
                    }
                    sum=sum/n;
                    for(int i=0;i<n;i++)
                    {
                              if(a[i]>sum)
                                        count=count+(a[i]-sum);
                    }
                    printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,count);
                    j++;

          }
          return 0;
}
