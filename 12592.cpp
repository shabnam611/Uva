#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,string>m;
int n,i,j,k;
while(scanf("%d", &n)==1){
    getchar();
    string a,b;
  for(i=1;i<=n;i++){
      a.clear();
      b.clear();
   getline(cin,a); //console theke input nitesi
   getline(cin,b);
   m[a]=b;
}
scanf("%d", &j);
getchar();
for(k=0;k<j;k++){
  a.clear();
  b.clear();
  getline(cin,a);
  cout<<m[a]<<endl;
  }
}
}


