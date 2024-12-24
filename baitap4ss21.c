#include<stdio.h>
#include<string.h>

int main(){
    char c[100];
    FILE *fptr = fopen("bt01.txt","r");
    if(fptr==NULL){
        printf("Doc file that bai\n");
        return 1;
    }
    printf("%s",fgets(c,100,fptr));
    printf("Doc file thanh cong");
    fclose(fptr);
    return 0;
}