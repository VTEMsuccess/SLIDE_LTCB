#include<stdio.h>
#include<string.h>

void show(char s[100]){
    int i;
    for (i=0; i<strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 32;
        }
    }
    printf("%s\n",s);
}

int main() {
    char s1[100], s2[100], s3[100];
    printf("Nhap vao chuoi: ");
    scanf("%s %s %s", s1, s2, s3);
    show(s1);
    show(s2);
    show(s3);
    return 0;
}
