#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

struct NodoListaSE {
  int dato;
  NodoListaSE *sgte;
};
void insertarInicio(NodoListaSE *&lista, int valor)
{
    if(lista == NULL)
    {
        NodoListaSE *nuevo = new NodoListaSE();
        nuevo->dato = valor;
        nuevo->sgte = NULL;
        lista = nuevo;
    } else {
        NodoListaSE *nuevo = new NodoListaSE();
        nuevo->dato = valor;
        nuevo->sgte = lista;
        lista = nuevo;
    }
    return;
}
void insertarFinal(NodoListaSE *&lista, int valor)
{
    if(lista == NULL)
    {
        NodoListaSE *nuevo = new NodoListaSE();
        nuevo->dato = valor;
        nuevo->sgte = NULL;
        lista = nuevo;
    } else {
        NodoListaSE *aux = lista;
        while(aux->sgte != NULL)
        aux = aux->sgte;
            NodoListaSE *nuevo = new NodoListaSE();
            nuevo->dato = valor;
            nuevo->sgte = NULL;
            aux->sgte = nuevo;
        
    }
    return;
}
void mostrarLista(NodoListaSE *lista)
{
    NodoListaSE *aux = lista;
    if(aux == NULL)
    {
        cout << "Lista vacia" << endl;
        return;
    }
    while(aux != NULL) {
        cout << aux->dato << "->" << aux->sgte << endl;
        aux = aux->sgte;
    }
    return;
}
void contarLista(NodoListaSE *lista) 
{
    int contador = 0;
    NodoListaSE *aux = lista;
    while(aux != NULL){
        contador++;
        aux = aux->sgte;
    }
    cout << "La lista tiene " << contador << "nodos" << endl;
}
bool buscarElemento(NodoListaSE *lista, int valor)
{
    /* Para buscar la lista necesito saber que valor estoy buscando y si realmente existe recorriendo la lista*/
    NodoListaSE *aux = lista;
    while(aux != NULL)
    {
        if(aux->dato == valor)
        {
            return true;
        } else {
            aux = aux->sgte;
        }
    }
    return false;
}
int main()
{
    cout << "Hola" << endl;
}