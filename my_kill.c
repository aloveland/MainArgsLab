int main(int argc, char *argv[]) {
  if (argc != 2) {
        printf("Error - command format is $ my_kill pid\n");
        exit(-1);
  }
  printf("my_kill pid: %d\n", getpid());
  int status = kill(pid_to_kill, SIGINT);
 int errnum = errno;
 if (status == -1) {
     fprintf(stderr, "Value of errno: %d\n", errno);
     perror("Error printed by perror");
     fprintf(stderr, "Error killing process: %s\n", strerror( errnum));
   }
 }

