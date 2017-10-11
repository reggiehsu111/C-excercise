#include<stdio.h>
#include <stdlib.h>

int main() {
    int a[2],i;
    for (i=0; i<2; i++){
        scanf("%d", &a[i]);

    }
    //printf("%d%d/n", a[0], a[1]);

    for (i=2; i>0; i--){
        printf ("%d\n",a[i-1]);
    }
system("pause");
return 0;
}