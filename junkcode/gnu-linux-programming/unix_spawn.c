#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

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
   char *arg_list[] = {		/* �~���{���ѼƦC (�t�X�r�� v) */
      "ls",                     /* argv[0] �Y�{���W�� */
      "-l",
      "/tmp",
      NULL };			/* �H NULL ������ */

   spawn("ls", arg_list);       /* ���X fork() �P execv �� spawn() */
   printf("The end of the program.\n");

   return 0;
}
