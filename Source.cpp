#include <iostream>
#include <fstream>
#include "customer.h"
#include "mechanic.h"
using namespace std;



int main() {
	
	string aux;
	int sizeM; int sizeC;
	cout << "how many mechanics do you have?" << endl;
	cin >> sizeM;
	cout << "how many customers do you expeect to have?" << endl;
	cin >> sizeC;

	ifstream mechanics("mechanic.txt");
	ifstream customers("customers.txt");
	mechanic* Mlist = new mechanic[sizeM];
	customer* Clist = new customer[sizeC];

	int i = 0;
	while (getline(mechanics, aux)) {
		(Mlist + i)->setName(aux);
		getline(mechanics, aux);
		(Mlist + i)->setAge(stoi(aux));
		getline(mechanics, aux);
		(Mlist + i)->setID(stoi(aux));
		getline(mechanics, aux);
		int numapp = stoi(aux);
		while (numapp) {
			getline(mechanics, aux);
			int h = stoi(aux);
			getline(mechanics, aux);
			int m = stoi(aux);
			(Mlist + i)->addapp(h, m);
		}
		i++;
	}
	i = 0;
	while (getline(customers, aux)) {
		(Clist + i)->setName(aux);
		getline(customers, aux);
		(Clist + i)->setAge(stoi(aux));
		getline(customers, aux);
		(Clist + i)->setID(stoi(aux));
		getline(customers, aux);
		int numapp = stoi(aux);
		while (numapp) {
			getline(customers, aux);
			int h = stoi(aux);
			getline(customers, aux);
			int m = stoi(aux);
			(Clist + i)->setApp(h, m);
		}
		i++;
	}







	
	
	mechanics.close();
	customers.close();
	return 0;
}