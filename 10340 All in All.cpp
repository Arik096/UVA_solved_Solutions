#include<bits/stdc++.h>
using namespace std;
int main()
{
          string one,two;
          while(cin>>one>>two)
          {
                    int len1=one.size();
                    int len2=two.size();
                    int temp=0,i=0;
                              for(int j=0;j<len2;j++)
                              {
                                        if(one[i]==two[j])
                                                  {
                                                            temp=temp+1;
                                                            i++;
                                                            }
                              }
                    if(temp==len1)
                              cout<<"Yes"<<endl;
                    else
                              cout<<"No"<<endl;

          }
    return 0;
}
