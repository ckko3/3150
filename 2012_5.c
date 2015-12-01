#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int pid;
    char input[256];
    while(1) {
      printf("[3150 shell]$ ");
      fflush(stdout);
      fgets(input,255,stdin); // read input correctly
      if (strcmp(input, "exit") == 0)
          exit(0);
          // process input correctly
      pid = fork();
      waitpid(pid,NULL,0);
      execl(input, input, NULL); // run a program correctly
    }
    return 0;
  }
