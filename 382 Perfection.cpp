#include<bits/stdc++.h>
using namespace std;
int main()
{
          long n,t=0;

          while(1)
          {
                    cin>>n;
                    if(n==0)
                              break;
                    if(t==0)
                    cout<<"PERFECTION OUTPUT"<<endl;
                    long sum=0;
                    for(int i=1;i<=n/2;i++)
                    {
                              if(n%i==0)
                                        sum=sum+i;
                    }
                    if(sum==n)
                              printf("%5d  PERFECT\n",n);
                    else if(sum>n)
                              printf("%5d  ABUNDANT\n",n);
                    else
                              printf("%5d  DEFICIENT\n",n);
                    t++;
          }
          cout<<"END OF OUTPUT"<<endl;
          return 0;
}
