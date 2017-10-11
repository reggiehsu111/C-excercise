#include <stdio.h>
#include <string.h>

int min(int x, int y){
    int a;
    if (x>y)
        return y;
    else
        return x;
}
int edit(char *str1, char *str2){
    if (strlen(str1)==0){
        return strlen(str2);
    }
    if (strlen(str2)==0){
        return strlen(str1);
    }
    if (str1[0]==str2[0]){
        return edit(str1+1,str2+1);
    }
    else {
        return 1+min(edit(str1+1,str2),edit(str1,str2+1));
    }
}

int main(){
    char s[100][10],*str1,*str2;
    int i=0,a=10,b=0,c=0;
    while(scanf("%s",s[i])!=EOF){
        i++;
    }
    for (int n=0; n<i; n++){
        str1=s[n];
        for (int j=n+1;j<i;j++){
            str2=s[j];
            printf("%d\n",edit(str1,str2));
            if (a>edit(str1,str2)){
                a=edit(str1,str2);
                b=n+1;
                c=j+1;
            }
        }
    }
    printf("%d %d %d",a,b,c);
    return 0;
}