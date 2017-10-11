#include <stdio.h>

void fill_array(int *ptr[], int n){
    int a,b;
    for (int i=0;i<n;i++){
        *ptr[i]=i;
    }
    for (int i=0;i<n-1;i++){
        a=0;
        ptr[i]++;
        while(*ptr[i]==0){
            ptr[i]++;
            a++;
        }
        b=*ptr[i]+i;
        while(a>0){
            ptr[i]--;
            *ptr[i]=b;
            a--;
        }
    }
}