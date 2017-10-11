#include <stdio.h>

void shuffle(int *deck[]){
    int count=0;
    while(deck[count]!=NULL)
        count++;
    int *a[count];
    int i;
    if(count%2==0){
        for (i=0;i<count/2;i++){
            a[2*i]=deck[i];
        }
        for (i=count/2;i<count;i++){
            a[2*(i-count/2)+1]=deck[i];
        }
        for (i=0;i<count;i++){
            deck[i]=a[i];
        }
    }
    if(count%2==1){
        for (i=0;i<(count+1)/2;i++){
            a[2*i]=deck[i];
        }
        for (i=(count+1)/2;i<count;i++){
            a[2*(i-(count+1)/2)+1]=deck[i];
        }
        for (i=0;i<count;i++){
            deck[i]=a[i];
        }
    }

}
void print(int *deck[]){
    int count=0;
    while(deck[count]!=NULL){
        printf("%d ", *deck[count]);
        count++;
    }
}