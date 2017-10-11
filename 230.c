#include <stdio.h>
#include <stdlib.h>

int W,sum,n=0,value=0,max=0;
typedef struct object{
    int weight;
    int value;
}object;

void f(int sum,int start,int value){
    if (sum>w)
        return;
    if(value>=max)
        max=value;
    while(start<n){
        ptr+=start;
        f(sum+ptr->weight,start+1,value+ptr->value);
        start++;
    }
}

int main(){
    object *ptr,*ptr1;
    scanf("%d%d",&n,&W);
    ptr=(object*)malloc(n*sizeof(object));
    ptr1=ptr;
    for (int i=0;i<n;i++){
        scanf ("%d%d",&(ptr->weight),&(ptr->value));
        ptr++;
    }
    f(0,0,0);
    printf ("%d",max);
    return 0;
}