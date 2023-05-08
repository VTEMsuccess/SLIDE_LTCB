//su dung ham so sanh strcmp neu 2 chuoi bang nhau(giong nhau) thi tra vef 0 nguoc lai tra ve khac !=0

#include<stdio.h>
#include<string.h>

int main() {
    char s1[100],s2[100];
    scanf("%s%s",&s1,&s2);
     if (strcmp(s1, s2) == 0) {
        printf("two people having the same name");
    } else {
        printf("two people don't have the same name");
    }
    return 0;
}
