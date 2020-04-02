#include <iostream>
#include <cmath>


using namespace std;

int main() {

    float n, p;
    float c;
    float valor;

    cout<< "Numero n:" << endl;
    cin >> n;
    cout << "Numero p:"<< endl;
    cin >> p;

    c = (1/n);
    valor = pow(p,c);

cout << "Su numero es: " << valor;

    return 0;
}
