#include <stdio.h>
#include <math.h>


int length(int x, int y){
    return sqrt(x*x+y*y);
}

int dot_product(int x1,int y1, int x2, int y2){
    return x1*x2+y1*y2;
}

int main(){
    int a,n,x1,y1,x2,y2,x3,y3,x4,y4;
    int ax,ay,bx,by,cx,cy,flag;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        ax=x2-x1;
        ay=y2-y1;
        bx=x3-x1;
        by=y3-y1;
        cx=x4-x1;
        cy=y4-y1;
        flag=0;
        if (ax+cx==bx&&ay+cy==by)
            flag=1;
        if (ax+bx==cx&&ay+by==cy){
            flag=1;
            a=bx,bx=cx,cx=a;
            a=by,by=cx,cy=a;
        }

        if (cx+bx==ax&&cy+by==ay){
            flag=1;
            a=bx,bx=ax,ax=a;
            a=by,bx=ay,ay=a;
        }
        if (flag==0){
            puts("other");
            continue;
        }
        if (dot_product(ax,ay,cx,cy)==0){
            if (length(ax,ay)==length(cx,cy)){
                puts("square");
                continue;
            }
            else{
                puts("rectangle");
                continue;
            }
        }
        if (length(ax,ay)==length(cx,cy)){
            puts("diamond");
            continue;
            }
        else
            puts("other");
    }
    return 0;
}