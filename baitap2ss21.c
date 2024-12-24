#include<stdio.h>
int main(){
    char c;
    FILE *fptr = fopen("bt01.txt","r");
    if(fptr==NULL){
        printf("file khong ton tai\n");
        return 1;
    }
    c =fgetc(fptr);
    printf("Ki tu dau tien: %c\n",c);
    printf("Doc file thanh cong\n");
    return 0;
}