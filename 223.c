#include <stdio.h>

void f(int type,int x,int y,int l){
    if (l==2){
        printf("%d %d %d\n",type,x,y);
        return;
    }
    if (type!=3)
        f(1,x-l/4,y-l/4,l/2);
    if (type!=4)
        f(2,x+l/4,y-l/4,l/2);
    if (type!=1)
        f(3,x+l/4,y+l/4,l/2);
    if (type!=2)
        f(4,x-l/4,y+l/4,l/2);
    f(type,x,y,l/2);

}

int main(){
    int l,m,x,y;
    scanf("%d%d",&l,&m);
    x=l/2,y=l/2;
    while (l/2>=m){
        f(1,x,y,l);
        l=l/2;
        x+=l/2;
        y+=l/2;
    }

    return 0;

}