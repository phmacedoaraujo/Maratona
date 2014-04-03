#include <iostream>
#include <string>

using namespace std;


/* Funcao verificaTipo recebe um vetor V com 3 strings e deve armazenar o tipo de animal na string tipoAnimal

*/

void verificaTipo(string V[], string &tipoAnimal){

	

}

int main(){

	string V[3];
	string tipoAnimal = "";

	getline(cin, V[0]);
	getline(cin, V[1]);
	getline(cin, V[2]);

	verificaTipo(V,tipoAnimal);

	cout << tipoAnimal << "\n";
}
