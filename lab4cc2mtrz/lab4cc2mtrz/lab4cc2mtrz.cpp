/*Ejercicio 1
Escribir un programa donde se pueda ingresar los datos de tres personas, como el nombre, apellido, edad y DNI y luego lo muestre por pantalla.*/
/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string nombre[3];
    string apellido[3];
    string edad[3];
    string dni[3];
    cout << "Ingrese la siguiente información de las personas: \n";
    for (int i = 0; i < 3; i++) {
        cout << "\n**** Datos de las persona " << i + 1 << "****:\n";
        cout << "Nombre: "; getline(cin, nombre[i]);
        cout << "Apellido: "; getline(cin, apellido[i]);
        cout << "Edad: "; getline(cin, edad[i]);
        cout << "DNI: "; getline(cin, dni[i]);
    }
}
/*EJERCICIO 2
Hacer un array unidimensional que acepte ocho números enteros. Luego le
pregunte al usuario que ingrese un número a buscar, implementar una función que busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso contrario, retorna falso.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n[8];
    int b;
    int L = (sizeof(n) / sizeof(n[0]));
    cout << "Ingrese solo 8 numeros: \n";
    for (int i = 0; i < 8; i++) {
        cout << "NUMERO " << i + 1 << ":\n"; cin >> n[i];
    }
    for (int i = 0; i < 1; i++) {
        cout << "Ingrese el numero a buscar: "; cin >> b;
        for (int j = 0; j < L; j++) {
            if (b == n[j]) {
                if (true) {
                    cout << "VERDAD el numero esta aqui" << endl;
                }
            }
            else {
                cout << "FALSO no esta este numero aqui" << endl;
            }
        }
    }
}
*/
/*EJERCICIO 3
Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,debe mostrar la suma de todos los números que estén en una fila par.

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main() {
    int N[5][3];
    cout << "Ingrese los numeros solicitados: \n";
    int n, cont = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "\n NUMERO " << i + 1 << "x" << j + 1 << ":\n";
            cout << "N: "; cin >> n;
            N[i][j] = n;
        }
    }
    int F = (sizeof(N) / sizeof(N[0]));
    int C = (sizeof(N[0]) / sizeof(N[0][0]));
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            if (i % 2 != 0) {
                cont = cont + N[i][j];
            }
        }
    }cout << endl;
    cout << "La suma de las filas pares es: " << cont << endl;
    return 0;
}
*/
/*EJERCICIO 4
 Implementar un programa que rellene un array con los números primos
comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    int i,j, d=0, P[100];
    for (i= 1; i<= 100; i++){
        int cont = 0;
        for (j = 1; j<= i; j++){
            if (i % j == 0){
                cont++;
            }
        }if (cont == 2 || j == 1 || j == 0){
            P[d] = i;
            d++;
        }
    }for (i = 100; i>= 1; i--){
        cout<<P[i]<<endl;
    }
    return 0;
}
*/
/*EJERCICIO 6
Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma.
*/
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main() {
    int N[3][3];
    cout << "Ingrese 9 numeros: \n";
    int n, s=0,nf=0,cont = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "\n NUMERO " << i + 1 << "x" << j + 1 << ":\n";
            cout << "N: "; cin >> n;
            N[i][j] = n;
        }
    }
    int F = (sizeof(N) / sizeof(N[0]));
    int C = (sizeof(N[0]) / sizeof(N[0][0]));
    for (int i = 0; i < F; i++) {
        s = 0;
        nf = i + 1;
        for (int j = 0; j < C; j++) {
            s += N[i][j];
            if (s>cont) {
                cont = s;
            }
        }
    }cout << endl;
    cout << "La fila con suma mayor es: " <<nf<<" con resultado " << cont << endl;
    return 0;
}
