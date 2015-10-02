#include<stdio.h>
#include "utilities.h"

int main() {
	printf("Number of cores:%d, Number of threads:%d",get_cpu_cores(),get_hyperthreads());
	return 0;

}
