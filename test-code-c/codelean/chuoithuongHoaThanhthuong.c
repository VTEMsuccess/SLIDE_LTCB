//in chuoi Hoa  thanh chuoi thuong  khong dung ham
#include<stdio.h>
#include<string.h>

int main() {
    int i;
    char s[100];
    scanf("%s",&s);
    for(i=0; i<strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i]=s[i]+32;	//chuoi Hoa  thanh chuoi thuong
        }
    }
    printf("%s",s);
    return 0;
}

