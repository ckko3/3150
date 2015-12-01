#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char input[1000];
    while(1) {
      printf("[3150 shell] $ ");
      //strcpy(input, "/bin/ls");
      fgets(input,255,stdin);
      if (strcmp(input, "exit") == 0)
          exit(0);
      /* Let's have fork-and-execute */
      if (fork() && execl(input, input, NULL))
          printf("Easy assignment\n");
      wait(NULL);
    }
    return 0;
  }
