#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
   char *arg_list[] = {		/* �~���{���ѼƦC (�t�X�r�� v) */
      "ls",                     /* argv[0] �Y�{���W�� */
      "-l",
      "/tmp",
      NULL };			/* �H NULL ������ */

   execvp("ls", arg_list);      /* �b PATH ���|�M��~���{�� */
   printf("The end of the program.\n");
}
