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
            Goi lenh break de dung v�ng lap do
            d� t�m thay vi tr� dau ti�n m� k� tu c xuat hien.
            Neu kh�ng c� lenh break th� ket qua cua chuong tr�nh
            se l� vi tr� cuoi c�ng m� k� tu c xuat hien.
            */
            break;
        }
    }
    printf("%d",index);
    return 0;
}
