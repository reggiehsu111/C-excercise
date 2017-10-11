#include <stdio.h>

int max(int *iptr[], int n){
    int i,temp=0;
    for (i=0; i<n; i++){
        if (temp<*iptr[i])
            temp=*iptr[i];
    }
return temp;
}

