#include<bits/stdc++.h>
int main(){
    int t;
    scanf("%d", &t);
    int i,n,m,total = 0;
    double ans1,ans2;
    for(i=1;i<=t;i++){
        scanf("%d %d", &n,&m);
        n=n-2;
        m=m-2;
        ans1 = ceil(n/3.0);
        //printf("ans1 %d\n", ans1);
        ans2 = ceil(m/3.0);
        //printf("ans2 %d\n", ans2);
         total = ans1*ans2;
         printf("%d\n", total);
    }
    return 0;
}
