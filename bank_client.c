/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "bank.h"


int
withdraw_prog_1(char *host,int n1)
{
	CLIENT *clnt;
	int  *result_1;
	inputs  read_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, WITHDRAW_PROG, WITHDRAW_VER, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
	read_1_arg.amount=n1;
	result_1 = read_1(&read_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	return *result_1;
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;
	int a;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	printf("Welcome to my bank...!\n");
	printf("Enter amount you want to get :");
	scanf("%d",&a);

	host = argv[1];
	printf("Available balance : %d\n",withdraw_prog_1(host,a));

exit (0);
}
