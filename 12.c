#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<n;i++)
        printf("%d\n",i);
    for (int i=n;i>0;i--)
        printf("%d\n",i);
    return 0;
}