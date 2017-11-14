#include<bits/stdc++.h>
using namespace std;
string sum(string s1,string s2)
{
          if(s1.size()>s2.size())
                    swap(s1,s2);

          string str="";

          int n1=s1.size();
          int n2=s2.size();

          reverse(s1.begin(),s1.end());
          reverse(s2.begin(),s2.end());

          int carry=0;
          for(int i=0;i<n1;i++)
          {
                    int sum=((s1[i]-'0')+(s2[i]-'0'))+carry;
                    str.push_back(sum%10+'0');
                    carry=sum/10;
          }
          for(int i=n1;i<n2;i++)
          {
                    int sum=((s2[i]-'0')+carry);
                    str.push_back(sum%10+'0');
                    carry=sum/10;
          }
          if(carry)
          {
                    str.push_back(carry+'0');
          }
          reverse(str.begin(),str.end());
          return str;
}
int main()
{
          string s,s2="0";
          while(cin>>s && s!="0")
          {
                    s2=sum(s,s2);
          }
          cout<<s2<<endl;
          return 0;
}
