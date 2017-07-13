// Ejercicio 6.38: ej06_38.cpp
// Torres de Hanoi
#include <iostream>
using namespace std;

inline const void torreHanoi( unsigned int torre1, unsigned int torre2, unsigned int torre3, unsigned int Discos )
{
    if ( Discos == 1 )
        cout << torre1 << " --> " << torre3 << endl;
        else{
            torreHanoi( torre1, torre3, torre2, Discos - 1 );
            cout << torre1 << " --> " << torre3 << endl;
            torreHanoi( torre2, torre1, torre3, Discos - 1 );
        }
}

int main()
{
    cout << "!!TORRE DE HANOI!!\n" << endl;
    
    unsigned int torre1 = 1, torre2 = 2, torre3 = 3, Discos = 0;
    
    cout << "Numero de Discos: ";
    cin >> Discos;
    
    torreHanoi( torre1, torre2, torre3, Discos );
    
    return 0;
}