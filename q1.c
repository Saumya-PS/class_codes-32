#include <stdio.h>
#define r1 2
#define c1 2
#define r2 2
#define c2 2
void p(int re[r1][c2]){
    for(int i=0;i<r1;i++){
        for(int k=0;k<c2;k++){
            printf("%d",re[i][k]);
        }
    }
}

void mlt(int a[r1][c1],int b[r2][c2]){
    int re[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            re[i][j]=0;
            for(int k=0;k<c1;k++){
                re[i][j]+=a[i][k]*b[k][j];

            }
            printf("\n");
        }
    }
p(re);
}


int main(){
    int a[r1][c1],b[r2][c2];
    for(int i=0;i<r1;i++){
        for(int h=0;h<c1;h++){
            printf("enter element");
            scanf("%d",&a[i][h]);
        }
    }

    for(int i=0;i<r2;i++){
        for(int h=0;h<c2;h++){
            printf("enter element");
            scanf("%d",&b[i][h]);
        }
    }
    mlt(a,b);
    return 0;
}
