#include<stdio.h>
#include<string.h>
typedef struct{
    int id;
    char fullName[50];
    int age;
}Student;
int main(){
    int soSinhVien;
    FILE *fptr=fopen("students.txt","w");
    printf("Nhap so sinh vien: ");
    scanf("%d",&soSinhVien);
    getchar();
    Student sv[soSinhVien];
    for (int i = 0; i < soSinhVien; i++){
        // printf("Nhap id sinh vien: ");
        // scanf("%d",&sv[i].id);
        // getchar();
        sv[i].id = i+1;
        printf("Nhap ten sinh vien: ");
        fgets(sv[i].fullName,50,stdin);
        sv[i].fullName[strcspn(sv[i].fullName, "\n")] = '\0';
        printf("Nhap tuoi sinh vien: ");
        scanf("%d",&sv[i].age);
        getchar();
        fprintf(fptr, "%d, %s, %d\n", sv[i].id, sv[i].fullName, sv[i].age);
        fputc('\n',fptr);
    }
    
    return 0;
}