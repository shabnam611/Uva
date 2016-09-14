#include<bits/stdc++.h>
int main(){
    int t;
    scanf("%d", &t);
    int i,j,n,temps,templ,pos;
    for(i=1;i<=t;i++){
        scanf("%d", &n);
        for(j=1;j<=n;j++){
            scanf("%d", &pos);
            if(j==1){
                temps = pos;
                templ = pos;
            }
            else{
                if(temps>pos){
                    temps=pos;
                }
                if(templ<pos){
                    templ=pos;
                }
            }
            //printf("%d %d\n", temps,templ);
        }
        int ans=0;
        ans = 2*(templ - temps);
        printf("%d\n", ans);
    }
}
