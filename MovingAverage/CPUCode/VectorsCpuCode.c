

#include <stdio.h>
#include <stdlib.h>
#include "Maxfiles.h"
#include <MaxSLiCInterface.h>

float dataIn[12] = { 11, 3, 15, 23, 0, 12, 41, 6, 10, 15, 2, 1 };
float dataOut[12];

int main()
{

	for (int i = 0; i < 12; i++){
		printf("dataIn[%d] = %f\n", i, dataIn[i]);
	}

	printf("Running DFE\n");
	Vectors(12, 12, dataIn, dataOut);

	for (int i = 0; i < 12; i++){
		printf("dataOut[%d] = %f\n", i, dataOut[i]);
	}

	return 0;
}
