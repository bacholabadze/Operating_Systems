#include <iostream>
#include <sys/wait.h>
using namespace std;

void pid() {
	cout << "PPID" << getppid() << endl;
	cout << "PID" << getpid() << endl;
}

int main () {
	if (fork() != 0) {
		if (fork() != 0) {
			cout << "main\n";
			pid();
		} else {
			cout << "shvili 2\n";
			pid();
		}
	} else {
		if(fork() != 0) {
			cout<< "shvili 1\n";
			pid();
		} else {
			if (fork() != 0) {
				cout << "shshvili 1\n";
				pid();
			}else{
				cout<<"shshshvili 1\n";
				pid();
			}
		}
	}
}
