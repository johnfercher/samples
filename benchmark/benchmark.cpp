/*
 *	MIT License
 *
 *	Copyright (c) 2016 Johnathan Fercher
 *
 *	Permission is hereby granted, free of charge, to any person obtaining a copy
 *	of this software and associated documentation files (the "Software"), to deal
 *	in the Software without restriction, including without limitation the rights
 *	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *	copies of the Software, and to permit persons to whom the Software is
 *	furnished to do so, subject to the following conditions:
 *
 *	The above copyright notice and this permission notice shall be included in all
 *	copies or substantial portions of the Software.
**/

#include <stdio.h>
#include "unistd.h"
#include "stdlib.h"
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/types.h>

main(int argc, char *argv[]){
	int QTD;
	int times = 0;
	float tempos = 0;
	int pid;
	struct timeval tv1, tv2;
	double t1, t2;

	QTD = atoi(argv[1]);

	pid = fork();

	if(pid == 0){
		while(times < QTD){
			gettimeofday(&tv1, NULL);
			t1 = (double)(tv1.tv_sec) + (double)(tv1.tv_usec)/ 1000000.00;
			system(argv[1]);	
			gettimeofday(&tv2, NULL);
			t2 = (double)(tv2.tv_sec) + (double)(tv2.tv_usec)/ 1000000.00;

			tempos += (t2 - t1);
			times++;
			system("clear");
			printf("%d\n", times);
		}

		system("clear");
		printf("A media de tempo por execucao de %s em %d execucoes foi de %lf\n", argv[1], QTD, tempos/QTD);
	}
}