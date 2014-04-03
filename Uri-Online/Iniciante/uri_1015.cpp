#include <iostream>


using namespace std;



/* Funcao recebe 4 inteiros, x1 e y1 referentes a coordenada do ponto p1, e x2 e y2 referentes ao ponto p2 

	e retorna a distancia entre eles.
*/

double calculaDistancia( int x1, int y1, int x2, int y2 ){



	

	return 0.0;
}


int main(){

	int x1, y1, x2, y2;
	double distancia;

	cin >> x1 >> y1;  // faz a leitura das coordenadas do primeiro ponto
	cin >> x2 >> y2;  // faz a leitura das coordenadas do segundo  ponto

	distancia  = calculaDistancia(x1,y1,x2,y2);

	cout.precision(4);
 	cout << fixed << distancia << "\n";

 	return 0;

}
