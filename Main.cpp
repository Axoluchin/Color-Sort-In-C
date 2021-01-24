#include <iostream>
#include "Graficas.h"
#include "Nodo.h"
#include "BubbleSort.h"
#include "Quitshort.h"
#include "InsertionSort.h"
#include "Cocktailsort.h"

using namespace std;

void newVentana(Nodo *Lista){
    //CrearVentana();
    Nodo *viaje = Lista;

    int x = 0;
    while(viaje != NULL){
        AgregarLinea(viaje->RGB,x++);
        viaje = viaje->Siguiente;
    }
}

int main(){
    int opcion;
    bool ciclo = true;
    Nodo *Lista = NULL;
    Color rgb;
    int longitud = 1529;

    while(ciclo){
        cout<<"Colores y algoritmos"<<endl;

        cout<<"\nElige una opción"<<endl;
        cout<<"1) Crear Ventana Grafica"<<endl;
        cout<<"2) Crear e imprimir lineas de colores"<<endl;
        cout<<"3) Ordenar Tamaño"<<endl;
        cout<<"4) Ordenar Colores"<<endl;
        cout<<"5) Liberar Memoria"<<endl;
        cout<<"6) Salir"<<endl;

        cin>>opcion;

        switch (opcion)
        {
        case 1:
            CrearVentana("Colores y algoritmos");
            cout<<"Ventana creada"<<endl;
            break;

        case 2:
            Lista = crearNodo(Lista);
            for(int x = 0;x < 1529; x++){
                agregarNodo(Lista);
                rgb = getUltimoColor(Lista);
                AgregarLinea(rgb,x);
            }

            cout<<"Datos creados"<<endl;
            break;

        case 3:
            cout<<"Ordenar"<<endl;
            Cocktailsort(Lista);
            newVentana(Lista);
            cout<<"Datos Ordenados"<<endl;
            break;

        case 4:
            cout<<"Ordenando Colores"<<endl;
            BubbleSortRGB(Lista);
            newVentana(Lista);
            break;

        case 5:
            liberarLista(Lista);
            cout<<"Memoria Libre"<<endl;
            break;

        case 6:
            ciclo = false;

        default:
            break;
        }

        system("pause");
        system("cls");
    }
}
