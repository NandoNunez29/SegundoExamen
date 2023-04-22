#include <iostream>

using namespace std;

int main() {
    double salario[10];
    double suma;


    for (int i = 0; i < 10; i++){
        cout << "Digite su salario " << i << " : " << endl;
        cin >> salario[i];
        suma = suma+salario[i];
    }
    cout << "El promedio de los salarios es :" << suma/9 << endl;
    cout << "El total a pagar es " << suma << endl;
    return 0;
}
