#include <stdio.h>
#include <unistd.h>

int main(void){
    printf("Hello\n");
    fork();
    printf("World! ");
    fork();
    printf("Bye\n");
    pause();
    return 0;
}
