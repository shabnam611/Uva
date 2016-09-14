#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c,t=0;
    while(scanf("%d %d %d", &n,&m,&c)==3){
        t++;
        if((n==0)&&(m==0)&&(c==0)){
            break;
        }
        else{
            int i,j,k,ans = 0,temp = 0,flag = 0;
            int device[n+2],power[m+2],index[n+2];
            for(i=1;i<=n;i++){
                scanf("%d", &device[i]);
                index[i] = 0;
            }
            for(j=1;j<=m;j++){
                scanf("%d", &power[j]);
                if(index[power[j]]==0){
                    ans = ans + device[power[j]];
                    index[power[j]] = 1;
                    //printf("index[power[j]] %d , ans %d\n", index[power[j]] , ans);
                }
                else if(index[power[j]]==1){
                    ans = ans - device[power[j]];
                    index[power[j]] = 0;
                    //printf("index[power[j]] %d , ans %d\n", index[power[j]] , ans);
                }
                if(ans>c){
                    flag++;
                }
                else{
                    if(j==1){
                        temp = ans ;
                    }
                    else if(j>1){
                        if(ans>temp){
                            temp = ans ;
                        }
                    }
                }
            }
            printf("Sequence %d\n", t);
            if(flag>0){
                printf("Fuse was blown.\n");
            }
            else{
                printf("Fuse was not blown.\n");
                printf("Maximal power consumption was %d amperes.\n", temp);
            }
    }
    printf("\n");

  }
}
