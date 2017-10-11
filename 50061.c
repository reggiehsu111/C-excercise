#include <stdio.h>

/*int select(int hate[][], int a[]){
    int sum=0,max=0;
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            if (hate[i][j]==0){
                sum+=a[j];
            }
        }
        if (max<sum){
            max=sum;
        }
    }
    return max;
}*/
int main(){
    int n,a[64]={0};
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        scanf ("%d",&a[i]);
    }
    int hate[n][n];
    for (int i=0; i<n; i++){
        for (int j=0;j<n;j++){
                scanf("%d",&hate[i][j]);
        }
    }
    long long sum=0,max=0;
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            if (hate[i][j]==0){
                sum+=a[j];
            }
        }
        if (max<sum){
            // printf("%d",sum);
            max=sum;
        }
        sum=0;
    }
printf("%lld",max);

    return 0;
}