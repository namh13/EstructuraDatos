// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
using namespace std;


//devuelve el primer elemento de "mi_cola"
string getPrimerElemento(queue<string> mi_cola)
{
    return mi_cola.front(); //duevuelve el primer elemento de la cola
}

//devuelve la cantidad de elementos de "mi_cola"
int getTamano(queue<string> mi_cola)
{
    return mi_cola.size(); // utilizo la funcion de mi cola para saber cual es el tamaño de la cola
}

//devuelve true si "str" esta dentro de "mi_cola" de lo contrario devuelve false
bool existeEnCola(queue<string> mi_cola, string str)
{
    for(int i=0; i<mi_cola.size(); i++)
    {
        if(mi_cola.front()==str) // comparamos haber si el primer valor de la cola es igual a la variable str
        {
            return true; // devuelve verdadero si es igual
        }
        mi_cola.pop(); // eliminamos el elemento de cola por si no es igual
    }
    return false;
}

//devuelve el elemento mayor de "mi_cola"
int getMayor(queue<int> mi_cola)
{
    int mayor=0;
    while(!mi_cola.empty()) //un ciclo que se va a repetir siempre y cuando no este vacia la cola
    {
        if(mi_cola.front()> mayor) // miramos a ver si el primer elemento es mayor que nuestra variable temporal de mayor
        {
            mayor=mi_cola.front(); // si lo es guardamos el elemento en nuestra variable
        }
        mi_cola.pop(); //eliminamos el elemento para seguir probando con los demas elementos
    }
    return mayor; //devuelve el valor mayor de todos
}

//devuelve el elemento menor de "mi_cola"
int getMenor(queue<int> mi_cola)
{
    int menor=mi_cola.front(); //variable menor donde guardamos nuestro primer elemento de la cola
    while(!mi_cola.empty()) //miramos a ver si la cola esta vacia o no
    {
        if(mi_cola.front()< menor) //comparamos a ver si el elemento de la cola es menor o no
        {
            menor=mi_cola.front(); //si lo es entonces lo guradamos en nuestra variable menor
        }
        mi_cola.pop(); //eliminamos ese elemento
    }
    return menor; //devolvemos el elemento menor
}

//devuelve el promedio de todos los elementos de "mi_cola"
float getPromedio(queue<float> mi_cola)
{
    float cantidad= mi_cola.size(); //variable para saber el tamaño de nuestra cola
    float temp = 0; //variable temporal donde sumaremos los elementos de la cola

    while(mi_cola.empty()==false) // miramos a ver si no esta vacia la cola
    {
        temp= temp + mi_cola.front(); // se suma la variable temporal con el primer elemento de la cola

        mi_cola.pop(); //eliminamos el elemento que acabamos de sumar
    }
    return temp/cantidad; //dividimos el resultdo de la suma entre el tamaño de la cola
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
