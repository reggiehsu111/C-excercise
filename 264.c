#include <stdio.h>
#include <assert.h>

int main(){
    int i=0,n,a=0,num,count[65536]={};
    char filename[200];
    FILE *fp;
    scanf("%s",filename);
    fp=fopen(filename,"rb");
    fread(&n,4,1,fp);
    short int temp;
    for (int i=0; i<n; i++){
        fread(&temp,2,1,fp);
        count[temp+32768]++;
    }
    for (i=0;i<65536;i++){
        if(count[i]>=a){
            a=count[i];
            num=i-32768;
        }
    }
    printf("%d\n%d",num,a);
    fclose(fp);
    return 0;
}