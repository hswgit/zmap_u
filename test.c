//static int (*t_api)(int argc,char *argv[]);
#include "stdio.h"
#include "string.h"

void show_ip(char *ip)
{
    printf("IP:%s\n",ip);
}

void show_st(char *st)
{
    printf("ST:%s\n",st);	
}

int main(int argc,char *argv[])
{
	void (*pfunc2)(char *) = show_ip;
	void (*pfunc1)(char *) = show_st;
	sd_init(pfunc1,pfunc2);
	sd_start(argc,argv);
	return 0;
}

