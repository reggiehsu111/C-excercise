#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int j=1;j<n+1;j++){
        for (int i=1;i<j+1;i++)
            printf("%d",i);
    }
    return 0;
}