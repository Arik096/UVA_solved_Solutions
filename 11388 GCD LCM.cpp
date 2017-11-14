#include <stdio.h>
int main(){
    int a,b,n;
    scanf("%d",&n);
    while(n--)
        {
        scanf("%d%d",&b,&a);
        if(a%b)
            {
                printf("-1\n");
            }
        else
        {
            printf("%d %d\n",b,a);
        }
    }
    return 0;
}