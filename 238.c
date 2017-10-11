#include <stdio.h>

int f(int k, int *ptr, int n){
    if (k==0)
        return 1;
    if (n==0)
        return 0;
    return f(k-*ptr,ptr+1,n-1)+f(k,ptr+1,n-1);
}


int main(){
    int n,k;
    scanf("%d",&n);
    int a[n],*ptr;
    for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    while (scanf("%d",&k)!=EOF){
        ptr=a;
        int count=0;
        printf("%d\n",f(k,ptr,n));
    }
    return 0;
}