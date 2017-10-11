#include <stdio.h>
#include <string.h>

void fuse(char *s, char *final){
    int k=strlen(final),flag=0;
    if (k==0)
        strcpy(final,s);
    else {
        for (int i=0;i<k&&flag==0;i++){
            if (final[i]==s[0]){
                for (int j=0;j<k;j++){
                    if (final[i+j]!=s[j]){
                        break;
                    }
                    if (i+j==k-1){
                        strcat(final,s+k-i);
                        flag=1;
                        break;
                    }
                }
            }
            else if(i==k-1){
                strcat(final,s);
            }
        }
    }
}
int main(){
    char s[127]={},final[127]={};
    int n=0;
    while (scanf("%s",s)!=EOF){
        fuse(s,final);
    }
    printf("%s",final);
    return 0;
}