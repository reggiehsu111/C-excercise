#include <stdio.h>

int sqaure_sum(int a){
    int sum;
    if (a==1)
        sum=1;
    else
        sum = sqaure_sum(a-1)+a*a;
    return sum;
}

int main(){
    int input,output;
    scanf("%d",&input);
    output = sqaure_sum(input);
    printf("%d\n",output);
    return 0;
}