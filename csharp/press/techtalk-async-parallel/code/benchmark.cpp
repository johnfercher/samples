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

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <sys/time.h>

double GetTimeMachine();
double ExecuteBenchmark(const std::stringstream &shellCommand);
void PrintResults(int totalOfExecutions, double deltas);

int main(int argc, char *argv[]){
	std::stringstream shellCommand;
	int totalOfExecutions = 0;
	double deltas = 0.0;

	if(argc <= 2){
		std::cerr << "Invalid amount of arguments" << std::endl;
		return 0;
	}

	shellCommand << argv[1];
	totalOfExecutions = atoi(argv[2]);

	for(int i = 0 ; i < totalOfExecutions ; i++){
		deltas += ExecuteBenchmark(shellCommand);
	}

	PrintResults(totalOfExecutions, deltas);

	return 0;
}

double GetTimeMachine(){
	struct timeval timeMachine;
	gettimeofday(&timeMachine, NULL);
	return (double)(timeMachine.tv_sec) + (double)(timeMachine.tv_usec)/ 1000000.00;
}

double ExecuteBenchmark(const std::stringstream &shellCommand){
	double initialTime, finalTime;

	initialTime = GetTimeMachine();
	system(shellCommand.str().c_str());
	finalTime = GetTimeMachine();

	return (finalTime - initialTime);
}

void PrintResults(int totalOfExecutions, double deltas){
	std::cout << std::endl;
	std::cout << "AVG - Execution time in " << totalOfExecutions << " execution(s): " << std::endl;
	std::cout << deltas/totalOfExecutions << " seconds" << std::endl;
}
