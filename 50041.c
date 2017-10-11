#include <stdio.h>

int main(){
    int n,i,current,previous,sum;
    scanf("%d\n",&n);
    int h[n];
    for(i=0;i<n;i++){
        scanf("%d",h[i]);
    }
    if(h[1]>h[0]){
        sum=3*(h[1]-h[0]);
        previous=1;
    }
    else{
        sum=2*(h[0]-h[1]);
        previous=0;
    }
    for (i=1;i<n-1;i++)
    {
        current=h[i+1]-h[i];
        if(current>0){
            if(previous)
                sum=sum+4*current;
            else
                sum=sum+3*current;
            previous=1;
        }
        else{
            if(previous)
                sum=sum-3*current;
            else
                sum=sum-2*current;
            previous=0;
        }
    }
        printf("%d\n",sum);


    return 0;
}