#include <stdio.h>
int count=0;

void f(int a,int b, int x, int y){
    if(x==a&&y==b){
        count++;
        return;
    }
    if (x<a)
        f(a,b,x+1,y);
    if (y<b)
        f(a,b,x,y+1);

}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int x=1,y=1;
    f(a,b,x,y);
    printf("%d",count);
    return 0;
}