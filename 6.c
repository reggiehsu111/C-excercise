#include<stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a<100||a>999){
        printf("unavailable number");
    }
    else{
        printf("%d\n",a/100);
        printf("%d\n",(a%100)/10);
        printf("%d\n",((a%100)%10));
    }
return 0;
}