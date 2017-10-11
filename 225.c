#include <stdio.h>
#include <assert.h>
#include <string.h>

typedef struct person{
    unsigned int id;
    char name[32];
}Person;

typedef struct friends{
    unsigned int id1;
    unsigned int id2;
}Friends;

int main(){
    FILE *fp=fopen("friends","rb");
    assert(fp!=NULL);
    unsigned int P[1],F[1],person1,person2,flag;
    Person a[10000]={};
    Friends b[10000]={};
    fread(P,4,1,fp);
    for (int i=0;i<P[0];i++){
        fread(&a[i],sizeof(Person),1,fp);
    }
    fread(F,4,1,fp);
    for (int i=0;i<F[0];i++){
        fread(&b[i],sizeof(Friends),1,fp);
    }
    char name1[32],name2[32];
    while (scanf("%s",name1)!=EOF){
        if (strcmp(name1,"end")==0)
            break;
        scanf("%s",name2);
        flag=0;
        for (int i=0;i<P[0];i++){
            if (strcmp(name1,a[i].name)==0){
                person1=a[i].id;
                flag++;
            }
            if (strcmp(name2,a[i].name)==0){
                person2=a[i].id;
                flag++;
            }
            if (flag==2)
                break;
        }
        flag=0;
        for (int i=0;i<F[0];i++){
            if ((person1==b[i].id1&&person2==b[i].id2)||(person1==b[i].id2&&person2==b[i].id1)){
                printf("yes\n");
                flag++;
                break;
            }
        }
        if (flag==0)
            printf("no\n");
    }
    return 0;
}