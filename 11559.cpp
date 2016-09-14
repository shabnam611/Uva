#include<bits/stdc++.h>
int main(){
    int n,b,h,w;
    while(scanf("%d %d %d %d", &n,&b,&h,&w)==4){
        int i,p,bed,cost,flag=0,t=0,minCost=b;
        while(t!=h){
            scanf("%d", &p);
            for(i=1;i<=w;i++){
            scanf("%d", &bed);
            if(bed>=n){
                if(b>=(n*p)){
                    cost = n*p;
                        if(minCost>=cost){
                           minCost = cost;
                           flag=1;
                        }
                    }
                }
            }
        t++;
        }
        if(flag==1){
          printf("%d\n", minCost);
        }
        else if(flag==0){
            printf("stay home\n");
        }
    }
    return 0;
}
