#include<stdio.h>
#include "controle.h"

int main(int argc, char** argv)
{
	char str[50];
	controle ctrl;
	
	
	printf("Come�ar o controle? <Sim/Nao> ");
	gets(str);
	if(strcmp(strupr(str),"SIM"));
	{
		printf("Informe um nome para o produto: ");
		fflush(stdin);
		gets(str);
		strcpy(ctrl.nome,str);
	}
	printf("%s",str);
	return 0;
}