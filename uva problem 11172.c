#include <stdio.h>
int main() {
    int i,t,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    scanf("%d %d",&a,&b);
    if(a>b){
        printf(">\n");
    }
else if(a<b){
    printf("<\n");
}
else{
    printf("=\n");
}
        
}
    return 0;
}