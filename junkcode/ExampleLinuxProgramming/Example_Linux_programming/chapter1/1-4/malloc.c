#include <stdlib.h>

int main(int argc,char *argv[]){
	int *ptr;
	ptr=malloc(sizeof(int)*100);		//����ANSI C���g�k
	ptr=(int *)malloc(sizeof(int)*100);	//�����ª��g�k
}
