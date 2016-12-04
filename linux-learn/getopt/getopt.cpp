/*
[Author:HualuNie
CreateTime:2016/12/04

]
*/)

#include<unistd.h>
#include<getopt.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	int result;
	opterr = 0;
	while((result = getopt(argc, argv, "ab:c::")) != -1)
	{
		switch(result)
		{
			case 'a':
				printf("option=a, optopt=%c, optarg=%s\n", 
				optopt, optarg);
				break;
			case 'b':
				printf("option=b, optopt=%c, optarg=%s\n", 
				optopt, optarg);
				break;
			case 'c':
				printf("option=c, optopt=%c, optarg=%s\n", 
				optopt, optarg);
				break;
			case '?':
				printf("option=?, optopt=%c, optarg=%s\n", 
				optopt, optarg);
				break;					
		}
		printf("argv[%d] = %s\n", optind, argv[optind]);
	}
	
	for(result = optind; result < argc; result++)
		printf("-------argv[%d]=%s\n", result, argv[result]);
	for(result = 1; result < argc; result++)
		printf("at the end----argv[%d]=%s\n", result, argv[result]);
	return 0;
}
