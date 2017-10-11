#include <stdio.h>
#include <string.h>

char abb(char *s){
    return s[0]-'a'+'A';
}

int main(){
    char s[127],a[127]={};
    while (scanf("%s",s)!=EOF){
        if (s[strlen(s)-1]=='.'){
            s[strlen(s)-1]='\0';
            if (strcmp(s,"of")*strcmp(s,"the")*strcmp(s,"and")*strcmp(s,"at")){
                printf("%c",abb(s));
            }
            printf("\n");
        }
        else if (strcmp(s,"of")*strcmp(s,"the")*strcmp(s,"and")*strcmp(s,"at")){
            printf("%c",abb(s));
        }
    }
    return 0;
}