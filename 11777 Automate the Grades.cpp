#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n;
          cin>>n;
          for(int i=1;i<=n;i++)
          {
                    int ct[3]={0,0,0};
                    int t1,t2,finals,attendence;
                    cin>>t1>>t2>>finals>>attendence>>ct[0]>>ct[1]>>ct[2];
                    sort(ct,ct+3);
                    //cout<<ct[0]<<" "<<ct[1]<<endl;
                    int cts=(ct[1]+ct[2])/2;
                    int marks=t1+t2+finals+attendence+cts;
                    //cout<<marks<<endl;
                    char grade;
                    if (marks >= 90)
                              grade = 'A';
                    else if (marks >= 80)
                              grade = 'B';
                    else if (marks >= 70)
                              grade = 'C';
                    else if (marks >= 60)
                              grade = 'D';
                    else
                              grade = 'F';
                    cout<<"Case "<<i<<": "<<grade<<endl;
          }
          return 0;
}
