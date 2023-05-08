//in ra cac so co so 0 o phia sau tu 10 den n
#include<stdio.h>

int main() {
    int i = 1;
    do {
        if(i % 10 == 0){
            printf("%d ",i);
        }
        i++;
    } while (i <= 1000);
    return 0;
}
