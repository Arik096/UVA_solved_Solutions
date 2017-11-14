#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        int a[t];
        for(int j=0;j<t;j++)
            cin>>a[j];
        sort(a,a+t);
        int q=t/2;
        cout<<"Case "<<i<<": "<<a[q]<<endl;
    }
    return 0;
}
