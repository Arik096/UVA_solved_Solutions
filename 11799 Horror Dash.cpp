#include<bits/stdc++.h>
using namespace std;
int main()
{
          int t;
          cin>>t;
          for(int i=1;i<=t;i++)
          {
                    int n,max=0;
                    cin>>n;
                    int a[n];
                    for(int j=0;j<n;j++)
                    {
                              cin>>a[j];
                              if(max<a[j])
                              {
                                        max=a[j];
                              }
                    }
                    cout<<"Case "<<i<<": "<<max<<endl;
          }
          return 0;
}
