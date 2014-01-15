#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int spawn(char *prog, char **arg_list)
{
   pid_t child;

   child = fork();

   if (child != 0) {
      return child;
   } else {
      execvp(prog, arg_list);
      fprintf(stderr, "spawn error\n");
      return -1;
   }
}

int main()
{
   int child_status;

   char *arg_list[] = {		/* �~���{���ѼƦC (�t�X�r�� v) */
      "ls",                     /* argv[0] �Y�{���W�� */
      "-l",
      "/tmp",
      NULL };			/* �H NULL ������ */

   spawn("ls", arg_list);       /* ���X fork() �P execv �� spawn() */

   wait(&child_status);         /* ���� child process ���槹�� */

   if (WIFEXITED (child_status))
      printf("child process exited normally, and its exit code is %d\n",
             WEXITSTATUS(child_status));
   else
      printf("child process exited abnormally\n");

   return 0;
}
