#include<bits/stdc++.h>
using namespace std;
int main()
{
          string s;
          while(getline(cin,s))
          {
                    int d=s.size();
                    stack<char>stk;
                    for(int i=0;i<=d;i++)
                    {
                              if(s[i]==' '||i==d)
                              {
                                        while(!stk.empty())
                                        {
                                                  cout<<stk.top();
                                                  stk.pop();
                                        }
                                        if(i!=d)
                                        cout<<" ";
                              }
                              else
                                        stk.push(s[i]);
                    }
                    cout<<endl;
          }
          return 0;
}
