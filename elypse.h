#include <iostream>
#include "loglib.h"
#include <fstream>
using namespace std;

int app() {
	ofstream cfile;
	ifstream rfile;
	int process;
	Account account;
	cout << "1 - Create a application\n";
	cout << "2 - Reading a exiting application\n";
	cout << "3 - Edit a exiting application\n";
	cout << "Select a operation: ";
	cin >> process;

	if (process == 1) {
		system("cls");
		string appname;
		cout << "Enter application name: ";
		cin >> appname;
		cfile.open(appname + ".cpp");
		cout << "Created" + appname + "named application :)" << endl;
		return app();
	}
	else if (process == 2) {
		system("cls");
		string appname;
		string code;
		cout << "Enter a exiting application name: ";
		cin >> appname;
		rfile.open(appname + ".cpp");
		rfile >> code;
		system("cls");
		cout << "Result: \n";
		cout << code << endl;
		return app();
	}
	else if (process == 3) {
		system("cls");
		string appname;
		string code;
		cout << "Enter a exiting application name: ";
		cin >> appname;
		cfile.open(appname + ".cpp");
		cout << "Enter code: ";
		cin >> code;
		cfile << code;
		system("cls");
		cout << "Result: \n";
		cout << code << endl;
	}

	return app();
}

int main() {
	int process;
	Account account;
	cout << "1 - Create a account\n";
	cout << "2 - Login a exiting account\n";
	cout << "Select a operation: ";
	cin >> process;
	switch (process)
	{
	case 1:
		account.createAcc();
		break;
	case 2:
		account.loginAcc();
		break;
	default:
		cout << "Wrong operation exiting...";
		break;
	}
	if (account.logCheck = true) {
		cout << "Hello, " + account.username << endl;
		return app();
	}
	else if (account.logCheck = false) { cout << "Wrong account"; }
}