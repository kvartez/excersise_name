#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int N = 5;
struct uczen
{
        string imie, nazwisko;
        int numer;
};

int main(int argc, char** argv) {
	uczen t[5];
	for(int i =0; i<5;i++){
		cout <<i<< endl;
		cout<< "podaj imie";
		cin >> t[i].imie;
		cout<< "podaj nazwisko";
		cin >> t[i].nazwisko;
		cout<< "podaj numer";
		cin >> t[i].numer;
		
	}
	cout<< "id";
	cout<< "\t imie";
	cout<< "\t nazwisko";
	cout<< "\t numer"<<endl;
	for(int i =0; i<5;i++){
	cout << i;
	cout<< "\t "<<t[i].imie;
	cout<< "\t "<<t[i].nazwisko;
	cout<< "\t\t"<<t[i].numer<<endl;
	}
	
	return 0;
}
