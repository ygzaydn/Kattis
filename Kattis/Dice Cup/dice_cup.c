#include <stdio.h>

int main(){
int n,m;
scanf("%d %d",&n,&m);
if (n==m){
printf("%d",m+1);
}

if (n>m){
for (int i=m+1;i<=n+1;i++){
printf("%d\n",i);
}
}

if (m>n){
for (int i=n+1;i<=m+1;i++){
printf("%d\n",i);
}
}

return 0;
}


