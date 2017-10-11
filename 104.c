#include <stdio.h>

int aa,ab,ac,da,db,dc,ea,eb,ec,fa,fb,fc;
int h(int aa, int ab, int ac){
    if (aa==0&&ab==0&&ac==0){
        return 1;
    }
    if (aa<0||ab<0||ac<0){
        return 0;
    }
    return h(aa-da,ab-db,ac-dc)||h(aa-ea,ab-eb,ac-ec)||h(aa-fa,ab-fb,ac-fc);
}
int main(){
    int n;
    scanf("%d%d%d",&da,&db,&dc);
    scanf("%d%d%d",&ea,&eb,&ec);
    scanf("%d%d%d",&fa,&fb,&fc);
    scanf("%d",&n);
    while (n>0){
    scanf("%d%d%d",&aa,&ab,&ac);
    puts(h(aa,ab,ac)? "yes":"no");
    n--;
    }
    return 0;
}