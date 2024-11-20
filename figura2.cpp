#include <iostream>
using namespace std;
//Autor: Eduardo Davila
//Simbolo del pintor austriaco
//Hecho únicamente con fines educativos y no representa ninguna inclinación política.
main(){
	int n;
	cout << "Introduce un numero: "; cin >> n;
	cout << endl;
	for (int i=0; i<=n-1; i++){
		for (int j=0; j<=n-1; j++){
			if (j == (n-1)/2 || i == (n-1)/2 || i==0 && j < (n+1)/2 || i==n-1 && j>((n-1)/2)-1 || j==0 && i>((n-1)/2)-1 || j==n-1 && i<(n+1)/2){
				cout << "*";	
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
}