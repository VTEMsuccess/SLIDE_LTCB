//in ra so tu 1 den 50 theo yeu cau cho truoc
#include<stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if(i==51){	//khi i=51 thi thoat chuong trinh
            break;
        }
        printf("%d ", i);
    }
    return 0;
}
