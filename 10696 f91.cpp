#include<bits/stdc++.h>
using namespace std;
long f91(long n)
{
          if(n<=100)
                    return f91(f91(n + 11));
          else if(n>=101)
                    return n-10;
}
int main()
{
          long n;
          while(cin>>n&&n!=0)
                    {
                              long ans=f91(n);
                              cout<<"f91("<<n<<") = "<<ans<<endl;
                              }
          return 0;
}
