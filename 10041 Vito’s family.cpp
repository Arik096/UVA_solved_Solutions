#include<bits/stdc++.h>
using namespace std;
int main()
{
          int t;
          cin>>t;
          for(int i=0;i<t;i++)
          {
                    int n;
                    cin>>n;
                    int a[n];
                    for(int j=0;j<n;j++)
                    {
                              cin>>a[j];
                    }
                    sort(a,a+n);
                    int mid=a[n/2];
                    int ans=0;
                    for(int j=0;j<n;j++)
                    {
                              ans=ans+abs(mid-a[j]);
                    }
                    cout<<ans<<endl;
          }
          return 0;
}
