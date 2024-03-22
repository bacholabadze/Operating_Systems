#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
	pid_t a = fork();
	if (a == -1) {
		cout<<"Procesi ver sheiqmna"<<endl;
		exit(-1);
	} else if ( a == 0) {
		cout<< "Shvili" << endl;
		cout<< "PPID: "<<getppid() << endl;
		cout<< "PID: "<<getpid() << endl;
	} else {
		cout<< "Mshobeli" << endl;
		cout<< "PPID: "<<getppid() << endl;
		cout<< "PID: "<<getpid() << endl;
	}
	
	
	cout<<"Hello OS"<<endl;
}
