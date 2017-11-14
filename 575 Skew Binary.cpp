#include<bits/stdc++.h>
using namespace std;
int main()
{
          string a;
          while(cin>>a&&a!="0")
          {
                    long long int sum=0,len=a.size();
                    for(long long int i=0;i<len;i++)
                    {
                              sum=sum+((a[i]-'0')*(pow(2,len-i)-1));
                    }
                    cout<<sum<<endl;
          }
          return 0;
}
