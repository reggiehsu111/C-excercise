#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int random=rand();
    for (int i=0; i<50; i++){
        for (int j=0;j<300; j++){
            printf("%d",rand()%2);
        }
        printf("\n");
    }
    return 0;
}