#include<bits/stdc++.h>
using namespace std;
int main()
{
          int t;
          cin>>t;
          for(int i=0;i<t;i++)
          {
                    long n;
                    cin>>n;
                    n=567*n;
                    n=n/9;
                    n=n+7492;
                    n=n*235;
                    n=n/47;
                    n=n-498;
                    cout<<abs((n%100)/10)<<endl;
          }
          return 0;
}
