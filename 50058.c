#include <stdio.h>
#include <string.h>
int mincost (char *s, int *cost){

}
int main(){
    int n,cost[20],a[26]={0};
    char s[20][50];
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%s%d",&s[i],&cost[i]);
    }
    for (int i=0;i<n;i++){
        printf ("%s %d\n",s[i],cost[i]);
    }
    for (int i=0;i<n;i++){
        int j=0;
        while (s[i][j]!='\0'){
            a[s[i][j]-'a']++;
            j++;
        }
    }
    for (int i=0;i<26;i++){
        printf("%d ",a[i]);
    }
    return 0;
}