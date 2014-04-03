#include <iostream>

using namespace std;


/* A funcao calculaQuadrante recebe as coordenadas (x e y) de um ponto em um plano.
	O aluno devera retornar o caractere :

	O (letra o) : Se o ponto estiver na origem
	X : Se o ponto estiver no exito x
	Y : Se o ponto estiver no eixo y
	P : Se o ponto estiver no primeiro quadrante
	S : Se o ponto estiver no segundo quadrante
	T : Se o ponto estiver no terceiro quadrante
	Q : Se o ponto estiver no quarto quadrante

*/

char calculaQuadrante(int x, int y){


	return '0';
}

int main(){

	double x, y;
	char quadrante;

	cin >> x >> y;

	quadrante = calculaQuadrante(x,y);

	switch(quadrante){

		case 'P': cout << "Q1\n"; break; // primeiro quadrante
		case 'S': cout << "Q2\n"; break; // segundo quadrante
		case 'T': cout << "Q3\n"; break; // terceiro quadrante
		case 'Q': cout << "Q4\n"; break; // quarto quadrante
		case 'X': cout << "Eixo X\n"; break; // eixo x
		case 'Y': cout << "Eixo Y\n"; break; // eixo y
		case 'O': cout << "Origem\n"; break; // origem


		// Caso o aluno retorne uma letra minuscula 
		case 'p': cout << "Q1\n"; break; // primeiro quadrante
		case 's': cout << "Q2\n"; break; // segundo quadrante
		case 't': cout << "Q3\n"; break; // terceiro quadrante
		case 'q': cout << "Q4\n"; break; // quarto quadrante
		case 'x': cout << "Eixo X\n"; break;
		case 'y': cout << "Eixo Y\n"; break;
		case 'o': cout << "Origem\n"; break;
	}

	return 0;
}
