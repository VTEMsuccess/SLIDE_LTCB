//tinh so a^b
#include<stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int i=1;
    while(b>0){
        i=a*i;
        b--;
    }
    printf("%d", i);
    return 0;
}
