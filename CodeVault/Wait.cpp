#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <cstdio>
#include <sys/wait.h>

using namespace std;

/*  OUTPUT
root@ip-10-10-76-84:~/Desktop# g++ first.cpp 
root@ip-10-10-76-84:~/Desktop# ./a.out 

1 2 3 4 5 
6 7 8 9 10 

*/
int main() {
	int id = fork();
	int n;

	if (id==0){
		n = 1;
	} else {
		wait(0);
		n = 6;
	}

	int i =0;
	for (i=n; i<n + 5; i++){
		printf("%d ", i);
		fflush(stdout);
	}

	printf("\n");
	return 0;
}
