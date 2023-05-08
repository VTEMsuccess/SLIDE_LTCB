//tim ky tu c vi tri xuat hien dau tien trong chuoi
#include<stdio.h>
#include<string.h>

int main() {
    char c;
    char s[100];
    scanf("%c", &c);
    scanf("%s", s);
    int i;
    int len=strlen(s)-1;
    int index = -1;
    for(i=0; i<len; i++){
        if(s[i]==c){
            index = i;
            /*
            Goi lenh break de dung vòng lap do
            dã tìm thay vi trí dau tiên mà ký tu c xuat hien.
            Neu không có lenh break thì ket qua cua chuong trình
            se là vi trí cuoi cùng mà ký tu c xuat hien.
            */
            break;
        }
    }
    printf("%d",index);
    return 0;
}
