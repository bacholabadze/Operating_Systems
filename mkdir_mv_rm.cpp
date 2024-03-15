/* დაწერეთ კონსოლური აპლიკაცია, რომელიც მომხმარებელს შესთავაზებს მარტივ და გასაგებ
 * ინტერფეისს. პროგრამის მეშვეობით უნდა იყოს შესაძლებელი რამდენიმე მოქმედების
 * გაკეთება. კერძოდ, დირექტორიასთან მუშაობა (შიგთავსის დათვალიერება / შექმნა /
 * წაშლა / სახელის გადარქმევა). მომხმარებელმა უნდა შეძლოს შესაბამისი დირექტორიის
 * სახელის კლავიატურიდან შეტანა. */

#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

short dialog() {
	int numb;

	while (true) {
		// გავაკეთოთ პროგრამის ინტერფეისი
		cout << "\n input: \n";
		cout << "   1. see dir \n";
		cout << "   2. make dir \n";
		cout << "   3. mv dir \n";
		cout << "   4. rm dir \n";
		cout << "   5. exit \n";

		cout << "\nyour choice: ";
		cin >> numb;
		return numb;
	}
}
#ifdef __unix__
	printf("You have UNIX Operating System");
	string dirOldName, dirNewName, command;

	short inp = dialog();

	switch (inp) {
	case 1: {
		cout << "\nშემოიტანეთ დირექტორიის სახელი: ";
		cin >> dirOldName;
		command = "ls -al " + dirOldName;
		break;
	}
	case 2: {
		cout << "\nშემოიტანეთ დირექტორიის სახელი: ";
		cin >> dirOldName;
		command = "mkdir " + dirOldName;
		break;
	}
	case 3: {
		cout << "\nშემოიტანეთ დირექტორიის სახელი: ";
		cin >> dirOldName;
		cout << "\nშემოიტანეთ დირექტორიის ახალი სახელი: ";
		cin >> dirNewName;
		command = "mv " + dirOldName + " " + dirNewName;
		break;
	}
	case 4: {
		cout << "\nშემოიტანეთ დირექტორიის სახელი: ";
		cin >> dirOldName;
		command = "rm -r " + dirOldName;
		break;
	}
	case 5: { cout << "\nპროგრამიდან წარმატებული გამოსვლა.\n\n"; exit(0); }
	default: {
		cout << "\nასეთი მოქმედება არაა განსაზღვრული. თავიდან სცადეთ.\n\n";
		continue;
	}
	}
	system(command.c_str());

#elif _WIN32
int main() {
	printf("You have Windows Operating System");
	string dirOldName, dirNewName, command;
	while (true) {
		short inp = dialog();
		switch (inp) {
		case 1: {
			string command = "tree";
			system(command.c_str());
			cout << "\nenter dir name ";
			cin >> dirOldName;
			command = "dir " + dirOldName;
			system(command.c_str());
			break;
		}
		case 2: {
			cout << "\nenter dir name: ";
			cin >> dirOldName;
			command = "md " + dirOldName;
			system(command.c_str());
			break;
		}
		case 3: {
			cout << "\nenter dir name: ";
			cin >> dirOldName;
			cout << "\nenter new dir name: ";
			cin >> dirNewName;
			command = "ren " + dirOldName + " " + dirNewName;
			system(command.c_str());
			break;
		}
		case 4: {
			cout << "\nenter dir name: ";
			cin >> dirOldName;
			command = "del " + dirOldName;
			system(command.c_str());
			command = "rmdir " + dirOldName;
			system(command.c_str());
			break;
		}
		case 5: { cout << "\nexit successs\n\n"; exit(0); }
		default: {
			cout << "\ntry again\n\n";
			break;
		}
		}
	}
}
#endif