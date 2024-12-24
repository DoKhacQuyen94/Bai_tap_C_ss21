#include<stdio.h>
#include<string.h>

int main(){
    char chuoi[100];
    FILE *fptr = fopen("bt01.txt","a");
    if(fptr==NULL){
        printf("Doc file that bai\n");
        return 1;
    }
    printf("Nhap chuoi can nhap vao file: ");
    fgets(chuoi,100,stdin);
    fputs(chuoi,fptr);
    printf("Doc file thanh cong");
    fclose(fptr);
    return 0;
}