// Ejercicio 6.38: ej06_38.cpp
// Torres de Hanoi
#include <iostream>
using namespace std;

/* REGLAS:
1- Solo se puede mover un disco a la vez.
2- No se puede colocar un disco mas grande sobre uno mas pequenio.
3- Todos los discos deben de llegar a la tercera Torre .
*/

inline const void torreHanoi( unsigned int torre1, unsigned int torre2, unsigned int torre3, unsigned int Discos )
{
    if ( Discos == 1 ) // Si solo hay un disco se movera a la tercera torre, osea cuando ya no haya discos se detendra
        cout << torre1 << " --> " << torre3 << endl;
        else{
            // Se cambia la pocision: seria tal como el inicio 1, el final siempre sera 3 y el auxilia 2.
            torreHanoi( torre1, torre3, torre2, Discos - 1 );
            cout << torre1 << " --> " << torre3 << endl; // imprime el movimiento de los discos
            torreHanoi( torre2, torre1, torre3, Discos - 1 ); // se vuelve a llamar la funcion para seguir moviendo los discos
        }
}

int main()
{
    cout << "!!TORRE DE HANOI!!\n" << endl;
    
    // Se definen las Variables, Ademas las torres deben de tener la posicion que van a ocupar en el juego.
    // La segunda torre sera como nuestro apoyo, "auxiliar" para almacenar los discos.
    unsigned int torre1 = 1, torre2 = 2, torre3 = 3, Discos = 0;
    
    cout << "Numero de Discos: ";
    cin >> Discos;
    // Se llama a la funcion
    torreHanoi( torre1, torre2, torre3, Discos );
    
    return 0; // :3
}

// Mas informacion: https://www.youtube.com/watch?v=LwxTVvcvGGs 
