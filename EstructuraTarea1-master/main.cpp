// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
using namespace std;


//devuelve el primer elemento de "mi_cola"
string getPrimerElemento(queue<string> mi_cola)
{
    return mi_cola.front();
}

//devuelve la cantidad de elementos de "mi_cola"
int getTamano(queue<string> mi_cola)
{
    return mi_cola.size();
}

//devuelve true si "str" esta dentro de "mi_cola" de lo contrario devuelve false
bool existeEnCola(queue<string> mi_cola, string str)
{
    for(int i=0; i<mi_cola.size(); i++)
    {
        if(mi_cola.front()==str)
        {
            return true;
        }
        mi_cola.pop();
    }
    return false;
}

//devuelve el elemento mayor de "mi_cola"
int getMayor(queue<int> mi_cola)
{
    int mayor=0;
    while(!mi_cola.empty())
    {
        if(mi_cola.front()> mayor)
        {
            mayor=mi_cola.front();
        }
        mi_cola.pop();
    }
    return mayor;
}

//devuelve el elemento menor de "mi_cola"
int getMenor(queue<int> mi_cola)
{
    int menor=mi_cola.front();
    while(!mi_cola.empty())
    {
        if(mi_cola.front()< menor)
        {
            menor=mi_cola.front();
        }
        mi_cola.pop();
    }
    return menor;
}

//devuelve el promedio de todos los elementos de "mi_cola"
float getPromedio(queue<float> mi_cola)
{
    float cantidad= mi_cola.size();
    float temp = 0;

    while(mi_cola.empty()==false)
    {
        temp= temp + mi_cola.front();

        mi_cola.pop();
    }
    return temp/cantidad;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
