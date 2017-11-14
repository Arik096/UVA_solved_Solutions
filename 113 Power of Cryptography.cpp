#include<bits/stdc++.h>
using namespace std;
int main()
{
          double n,p;
    while(scanf("%lf", &n) == 1)
          {
        scanf("%lf", &p);

        double r = pow(p, 1 / n);
        printf("%1.0f\n", r);
    }
}
