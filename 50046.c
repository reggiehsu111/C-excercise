#include <stdio.h>

int h(int p[][], int w[][], int M){
    int sum=0;
    for(int i=0;i<=M;i++){
        for (int j=0;j<=M;j++){
            sum=sum+p[i][j]*w[i][j];
        }
    }
    if (sum>=2*M*M)
        return 1;
    else
        return 0;
}

int main(){
    int N,M,flag,Q;
    scanf("%d%d",&N,&M);
    int p[M][M],w[M][M]=1;
    for (int i=0;i<=N;i++){
        scanf("%d",&flag);
        for(int k=0;k<=M;k++){
            for(int j=0;j<=M;j++){
                scanf("%d",&p[k][j]);
            }
        }
        if (flag!=h(p,w,M)&&flag==1){
            for(int k=0;k<=M;k++){
                for(int j=0;j<=M;j++){
                    if(p[k][j]==1)
                        w[k][j]*=2;
                }
            }
        }
        if (flag!=h(p,w,M)&&flag==0){
            for(int k=0;k<=M;k++){
                for(int j=0;j<=M;j++){
                    if(p[k][j]==1&&w[k][j]>1)
                        w[k][j]/=2;
                }
            }
        }
    }
    scanf("%d",&Q);
    for(int i=0;i<=Q;i++){
        for(int k=0;k<=M;k++){
            for(int j=0;j<=M;j++){
                scanf("%d",&p[k][j]);
            }
        }
        printf("%d",h(p,w,M));
    }
    return 0;
},