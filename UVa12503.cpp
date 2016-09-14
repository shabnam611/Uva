#include<bits/stdc++.h>
int main(){
    int n,t;
    char ins[100];
    scanf("%d", &t);
    int i,j,temp,row[110];
    for(i=1;i<=t;i++){
        scanf("%d", &n);
        int k,pos = 0;
        for(k=1;k<=n;k++){
            scanf("%s", &ins);
            getchar();
            if(ins[0]=='L'){
                    row[k]=1;
                    pos--;
                    //printf("pos in L : %d\n",pos);

            }
            else if(ins[0]=='R'){
                row[k] = 0;
                pos++;
                //printf("pos in R : %d\n",pos);

            }
            else{
                    scanf("%*s %d", &temp);
                    if(row[temp]==1){
                        pos--;
                        row[k]=1;
                    }
                    else if(row[temp]==0){
                        pos++;
                        row[k] = 0;
                    }
                    //printf("pos in S : %d\n",pos);
            }
        }
        printf("%d\n",pos);
        pos = 0;
    }
    return 0;
}
