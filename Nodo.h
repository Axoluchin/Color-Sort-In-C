#include <stdlib.h>


typedef struct Nodo{

    struct Color RGB;

    struct Nodo *Siguiente;
    struct Nodo *Atras;

}Nodo;


bool comprobarRGB(Color RGB,Nodo *liga){
    Nodo *viaje = liga;

    while (viaje->Siguiente != NULL)
    {
        if(viaje->RGB.Red == RGB.Red && viaje->RGB.Green == RGB.Green && viaje->RGB.Blue == RGB.Blue){
            return true;
        }

        viaje = viaje->Siguiente;
    }

    if(viaje->RGB.Red == RGB.Red && viaje->RGB.Green == RGB.Green && viaje->RGB.Blue == RGB.Blue){
        return true;
    }

    return false;
}



bool comprobarAltura(int altura,Nodo *liga){
    Nodo *viaje = liga;
    bool otroIntento = false;
    while (viaje->Siguiente != NULL)
    {
        if(viaje->RGB.altura == altura){
            if (otroIntento){
                return true;
            }
            else{
                otroIntento = true;
            }
        }

        viaje = viaje->Siguiente;
    }

    if(viaje->RGB.altura == altura){
            if (otroIntento){
                return true;
            }
    }

    return false;
}

Nodo *crearNodo(Nodo *liga){
    Nodo *nuevo = (Nodo*) malloc(sizeof(Nodo));

    if (liga == NULL){
        nuevo->RGB = nuevoColor();
        nuevo->Siguiente = NULL;
        nuevo->Atras = NULL;
        return nuevo;
    }

    do{
        nuevo->RGB = nuevoColor();
    }while(comprobarRGB(nuevo->RGB,liga) || comprobarAltura(nuevo->RGB.altura, liga));

    nuevo->Siguiente = NULL;
    nuevo->Atras = liga;

    return nuevo;
}

void agregarNodo(Nodo *liga){
    Nodo *nuevo = crearNodo(liga);
    Nodo *viaje = liga;

    while(viaje->Siguiente != NULL){
        viaje = viaje->Siguiente;
    }

    viaje->Siguiente = nuevo;
}

Color getUltimoColor(Nodo *liga){
    Nodo *viaje = liga;
    while(viaje->Siguiente != NULL){
        viaje = viaje->Siguiente;
    }

    return viaje->RGB;
}

void liberarLista(Nodo *liga){

    Nodo *viaje = liga, *borrar;

    while(viaje->Siguiente != NULL){
        borrar = viaje;
        viaje = viaje->Siguiente;
        free(borrar);
    }

    free(borrar);
    free(liga);
    liga = NULL;
}
