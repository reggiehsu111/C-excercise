#include <stdio.h>
int flag=0;
void test(int num){
        while (num<100){
        for (int i=2;i<=num/2;i++);
        if (num%i==0) flag=1;
        if(flag==0) printf("%d",num);
        num++;
        }
}
int main(){
    test(1);
    return 0;
}