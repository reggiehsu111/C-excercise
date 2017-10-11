#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a, const void*b){
    return *(int *)a-*(int *)b;
}

int N;
int rec[10]={0},a[10],b[10];


void f(int idx){
    if (idx==N){
        for(int i=0;i<N;i++)
        printf("%d ",b[i]);
        printf("\n");
        return;
    }
    for (int i=0;i<N;i++){
        if (rec[i]) continue;
        b[idx]=a[i];
        rec[i]=1;
        f(idx+1);
        rec[i]=0;
    }
}

int main(){
    scanf("%d",&N);
    for (int i=0;i<N;i++)
        scanf("%d",&a[i]);
    qsort(a,N,sizeof(int),cmp);
    f(0);
    return 0;
}