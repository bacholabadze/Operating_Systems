#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;

int x = 10;

int main() {
	if (fork() == 0) {
		sleep(1);
		x += x;
		cout << "x = " << x << endl;
	} else {
	// aidzulebs mshobels daelodos shvils 
		wait(nullptr);
		x *= x;
		cout << "x = " << x << endl;
	}
}
