#include<bits/stdc++.h>
using namespace std;
int main()
{
          double  a,b;
          while(cin>>a>>b&&a!=0&&b!=0)
          {
                    long s=0;
                  for(long i=a;i<=b;i++)
                  {
                            if(ceil(sqrt(i))==floor(sqrt(i)))
                              s++;
                  }
                  cout<<s<<endl;
          }
          return 0;
}
