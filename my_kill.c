#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <errno.h>
int main(int argc, char *argv[]) {
  if (argc != 2) {
        printf("Error - command format is $ my_kill pid\n");
        exit(-1);
  }
  printf("my_kill pid: %d\n", getpid());
  int pid_to_kill = atoi(argv[1]);
  int status = kill(pid_to_kill, SIGINT);
 int errnum = errno;
 if (status == -1) {
     fprintf(stderr, "Value of errno: %d\n", errno);
     perror("Error printed by perror");
     fprintf(stderr, "Error killing process: %d\n", strerror( &errnum));
   }
 }

