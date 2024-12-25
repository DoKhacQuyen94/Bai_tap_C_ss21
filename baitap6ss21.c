#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr=fopen("bt01.txt","r");
    FILE *fptr1=fopen("bt06.txt","a");
    if(fptr==NULL){
        printf("Khong the mo file");
        return 0;
    }
    char docChuoi[256];
    while (fgets(docChuoi, sizeof(docChuoi), fptr) != NULL) {
        // printf("%s", docChuoi);
        fputs(docChuoi, fptr1);
    }
    fclose(fptr);
    fclose(fptr1);
    return 0;
}