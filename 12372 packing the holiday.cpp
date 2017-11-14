#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n;
          cin>>n;
          for(int i=1;i<=n;i++)
          {
                    int l,w,h;
                    cin>>l>>w>>h;
                    int a=20*20*20;
                    int b=l*w*h;
                    if(l<=20&&w<=20&&h<=20&&b<=a)
                              cout<<"Case "<<i<<": good"<<endl;
                    else
                             cout<<"Case "<<i<<": bad"<<endl;

          }
          return 0;
