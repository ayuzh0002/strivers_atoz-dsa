#include<stdio.h>
int main(){
int i,j,k;
    for (int i = 'G'; i>='A'; i--) {
            for(k='G';k>=i;k--){
                    printf(" ");
                }
            for(j=i;j>='A';j--){
                printf("%c",j);
            }
            printf("\n");
        }
return 1;
}