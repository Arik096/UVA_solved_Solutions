#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n;
          cin>>n;
          for(int i=1;i<=n;i++)
          {
                    int students;
                    cin>>students;
                    double number[students],sum=0;
                    for(int j=0;j<students;j++)
                              {
                                        cin>>number[j];
                                        sum=sum+number[j];
                              }
                    double avg=sum/students;
                    int flag=0;
                    for(int j=0;j<students;j++)
                              {
                                        if(number[j]>avg)
                                                  flag++;
                              }
                              double pri=((flag*1.0)*100)/(students*1.0);
                              printf("%.3f%\n",pri);

          }
          return 0;
}
