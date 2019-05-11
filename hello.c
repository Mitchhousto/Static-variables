/* Hello World program */

#include<stdio.h>

void counter(void);

int main(){
    int x;
    for(x=0; x<10; x++);
        counter();
    printf("d\n",y);
}

void counter(void){
    int x = 0;
    static int y=0;
    printf("%d %d\n", x++, y++);
}