#include <stdio.h>
#include <string.h>
#include <assert.h>
typedef struct person {
    unsigned int id;
    char name[32];
}Person;
typedef struct friends {
    unsigned id1;
    unsigned id2;
}Friends;
int main(void){
    FILE *fp=fopen("friends","rb");
    assert (fp!=NULL);
    unsigned int person1,person2;
    char name1[40],name2[40];
    Person a[10005];
    Friends b[10005];
    int n1,n2,flag=0;
    fread(&n1,4,1,fp);
    for(int i=0;i<n1;i++){
            fread(&a[i],sizeof(Person),1,fp);
    }
    fread(&n2,4,1,fp);
    for(int j=0;j<n2;j++){
            fread(&b[j],sizeof(Friends),1,fp);
    }
    while(scanf("%s",name1)!=EOF){
        if(strcmp(name1,"end")==0){
            break;
        }
        scanf("%s",name2);
        flag=0;
        for(int i=0;i<n1;i++){
            if(strcmp(name1,a[i].name)==0){
                person1=a[i].id;
                flag++;
                continue;
            }
            if(strcmp(name2,a[i].name)==0){
                person2=a[i].id;
                flag++;
                continue;
            }
            if(flag==2){break;}
        }
        flag=0;
        for(int j=0;j<n2;j++){
            if(b[j].id1==person1&&b[j].id2==person2){
                printf("yes\n");
                flag=1;
                break;
            }
            else if(b[j].id1==person2&&b[j].id2==person1){
                printf("yes\n");
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("no\n");
        }
    }
    return 0;
}