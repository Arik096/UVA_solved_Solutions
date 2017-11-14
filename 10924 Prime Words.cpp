#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int d=s.size(),sum=0;
        for(int i=0;i<d;i++)
        {
            //cout<<s[i]<<endl;
            if(s[i]>='a'&&s[i]<='z')
                {
                    sum=sum+abs(s[i]-'a'+1);
                    //cout<<abs(s[i]-96)<<endl;
                }
            else
                {
                    sum=sum+abs(s[i]-'A'+27);
                    //cout<<abs(s[i]-38)<<endl;
                }
        }
        bool isPrime=true;
        for(int j=2;j<=sum/2;++j)
        {
            if(sum%j==0)
            {
                isPrime=false;
                break;
            }
        }
        if(isPrime==true)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }
    return 0;
}
