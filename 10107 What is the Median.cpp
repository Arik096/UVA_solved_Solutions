#include<bits/stdc++.h>
using namespace std;
int main()
{
          long a,i=0;
          long ar[10000];
          while(cin>>a)
          {
                    ar[i]=a;
                    sort(ar,ar+i+1);
                    if(i%2==1)
                              cout<<(ar[i/2]+ar[(i/2)+1])/2<<endl;
                    else
                              cout<<ar[i/2]<<endl;
                              i++;
          }
          return 0;
}
