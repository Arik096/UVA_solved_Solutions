#include<bits/stdc++.h>
using namespace std;
int main()
 {
           int K, N, M, a, b;
    while(1)
          {
        cin>>K;
        if(K == 0)
          break;
        cin>>N>>M;
        for(int i = 0; i < K; i++)
        {
            cin>>a>>b;
            if(a == N || b == M)
                cout<<"divisa"<<endl;
            else if(a > N && b > M)
                cout<<"NE"<<endl;
            else if(a < N && b > M)
                cout<<"NO"<<endl;
            else if(a > N && b < M)
                cout<<"SE"<<endl;
            else
                cout<<"SO"<<endl;
        }
    }
    return 0;
}
