#include <stdio.h>

struct emp {
    int id;  
    int sal;
    char ename[10];
};

void printS(struct emp e[],int n){
    for(int i=0;i<n;i++){
        printf("id- %d, sal-%d, name- %s\n",e[i].id,e[i].sal,e[i].ename);
    }
}

void sortEid(struct emp e[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(e[j].id<e[i].id){
                struct emp temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
}

void sortSal(struct emp e[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(e[j].sal<e[i].sal){
                struct emp temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
}

void sortEname(struct emp e[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(e[j].ename[0]<e[i].ename[0]){
                struct emp temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
}

void search(struct emp e[],int n,struct emp x){
    for(int i=0;i<n;i++){
        if(e[i].id==x.id){
            printf("%d,%d,%s",e[i].id,e[i].sal,e[i].ename);
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
   struct emp e[n];
   for(int i=0;i<n;i++){
       scanf("%d%d%s",&e[i].id,&e[i].sal,e[i].ename);
   }
   
   sortEname(e,n);
   printS(e,n);
   
   struct emp x;
   scanf("%d",&x.id);
   search(e,n,x);

    return 0;
}