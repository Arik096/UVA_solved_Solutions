#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n;
          cin>>n;
          for(int i=0;i<n;i++)
          {
                    int b;
                    cin>>b;
                    int a[b];
                    for(int j=0;j<b;j++)
                    {
                              cin>>a[j];
                    }
                    int c=0;
   for (int k = 0; k< b-1;k++)
       for (int j = 0; j < b-k-1; j++)
           if (a[j] > a[j+1])
              {
                        swap(a[j], a[j+1]);
                        c++;
              }

                    cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;

          }
          return 0;
}
