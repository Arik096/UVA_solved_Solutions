#include<bits/stdc++.h>
using namespace std;
long bigmod(long a,long b,long c)
{
          if(b==0)
                    return 1;
          if(b%2==0)
          {
                    long x=bigmod(a,b/2,c);
                    return (x*x)%c;
          }
          else
                    return (a%c*bigmod(a,b-1,c))%c;

}
int main()
{
          long a,b,c;
          while(cin>>a>>b>>c)
          {
                    cout<<bigmod(a,b,c)<<endl;
          }
          return 0;
}
