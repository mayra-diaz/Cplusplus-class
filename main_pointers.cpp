#include <iostream>

using namespace std;

void variable_por_valor(int n){
    cout << "\nPase por valor de una variable recibida como n" << endl;
    cout << "Valor de n:" << n << endl;
    cout << "Dirección de n:" << &n << endl;
}

void variable_por_referencia(int &n){
    cout << "\nPase por referencia de una variable recibida como n" << endl;
    cout << "Valor de n:" << n << endl;
    cout << "Dirección de n:" << &n << endl;
}

void puntero_por_valor(int* ptr){
    cout << "\nPase por valor de un puntero recibido como ptr" << endl;
    cout << "*ptr:" << *ptr << endl;
    cout << "ptr:" << ptr << endl;
    cout << "&ptr:" << &ptr << endl;
}

void puntero_por_referencia(int* & ptr){
    cout << "\nPase por referencia de un puntero recibido como ptr" << endl;
    cout << "*ptr:" << *ptr << endl;
    cout << "ptr:" << ptr << endl;
    cout << "&ptr:" << &ptr << endl;
}



int main() {

    int n = 10;
    int* ptr_n = &n;

    cout << "n = 10" << endl;
    cout << "ptr_n = &n" << endl;

    cout << "\nn: " << n << endl;
    cout << "&n: " << &n << endl;

    cout << "\n*ptr_n:" << *ptr_n << endl;
    cout << "ptr_n:" << ptr_n << endl;
    cout << "&ptr_n:" << &ptr_n << endl;

    variable_por_valor(n);
    variable_por_referencia(n);

    puntero_por_valor(ptr_n);
    puntero_por_referencia(ptr_n);

    return 0;
}

