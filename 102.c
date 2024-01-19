#include <stdio.h>
int main(){
    int a[9],BCG,BGC,CBG,CGB,GBC,GCB,i;
    while(scanf("%d",&a[0])!=EOF){
        for(i=1;i<9;i++)
            scanf("%d",&a[i]);

        BCG=a[1]+a[2]+a[3]+a[4]+a[6]+a[8];
        BGC=a[1]+a[2]+a[3]+a[5]+a[6]+a[7];
        CBG=a[0]+a[1]+a[4]+a[5]+a[6]+a[8];
        CGB=a[0]+a[1]+a[3]+a[5]+a[7]+a[8];
        GCB=a[0]+a[2]+a[3]+a[4]+a[7]+a[8];
        GBC=a[0]+a[2]+a[4]+a[5]+a[6]+a[7];

        if(BCG<=BGC&&BCG<=CBG&&BCG<=CGB&&BCG<=GCB&&BCG<=GBC)
            printf("BCG %d\n",BCG);
        else if(BGC<BCG&&BGC<=CBG&&BGC<=CGB&&BGC<=GCB&&BGC<=GBC)
            printf("BGC %d\n",BGC);
        else if(CBG<BCG&&CBG<BGC&&CBG<=CGB&&CBG<=GCB&&CBG<=GBC)
            printf("CBG %d\n",CBG);
        else if(CGB<BCG&&CGB<BGC&&CGB<CBG&&CGB<=GCB&&CGB<=GBC)
            printf("CGB %d\n",CGB);
        else if(GCB<BCG&&GCB<BGC&&GCB<CBG&&GCB<CGB&&GCB<GBC)
            printf("GCB %d\n",GCB);
        else if(GBC<BCG&&GBC<BGC&&GBC<CBG&&GBC<CGB&&GBC<=GCB)
            printf("GBC %d\n",GBC);
    }
    return 0;