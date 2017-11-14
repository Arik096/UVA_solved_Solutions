#include<bits/stdc++.h>
using namespace std;
int main()
{
          float h,m;
          while(1)
          {
                    scanf("%f:%f",&h,&m);
                    if(h==0&&m==0)
                              break;
                    float ha,a,ma;
                    ha=h*30.0+(m/60.0)*30.0;
                    ma=m*6.0;
                    a=abs(ha-ma);
                    if(a<0)
                              a=-1;
                    else if(a>180)
                              a=abs(360.0-a);
                    printf("%.3f\n",a);
          }
          return 0;
}
