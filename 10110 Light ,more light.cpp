#include<bits/stdc++.h>
using namespace std;
int main()
{
          unsigned a,b;
          while(cin>>a&&a!=0)
          {
                    b=sqrt(a);
                    if(b*b==a)
                              cout<<"yes"<<endl;
                    else
                              cout<<"no"<<endl;
          }
          return 0;
}
