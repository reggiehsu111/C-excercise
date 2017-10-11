#include <stdio.h>
#include <string.h>

int similar(char *s1, char *s2){
    int c,count=0,l1=strlen(s1),l2=strlen(s2);
    char a,b;
    if (l2<l1){
        for (int i=0;i<l1;i++){
            a=s1[i];
            s1[i]=s2[i];
            s2[i]=a;
        }
        c=l1;
        l1=l2;
        l2=c;
    }
    else if (l1==l2){
        for (int j=0;j<l1;j++){
            if (s1[j]!=s2[j]){
                if (count==0){
                    a=s1[j];
                    b=s2[j];
                    c=j;
                }
                if (count==1){
                    if (s1[j]!=b||s2[j]!=a||c+1!=j)
                        return 0;
                }
                count++;
            }
        }
        if (count==0||count==2)
            return 1;
        else
            return 0;
    }
    if (l1+1==l2){
        int j=0;
        while(s1[j]==s2[j]&&j<l1){
            j++;
        }
        if (j==l1)
            return 0;
        for (int k=j+1;k<l1;k++){
            if (s1[k]!=s2[k+1])
                return 0;
        }
        return 1;
    }
    else return 0;
}

int main(){
    int n;
    char s1[80],s2[80];
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%s%s",s1,s2);
        if(similar(s1,s2))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}