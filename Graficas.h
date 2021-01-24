#include <winbgim.h>
#include <stdlib.h>
#include <time.h>

typedef struct Color{
    int Red;
    int Green;
    int Blue;

    int priodidad;
    int altura;

}Color;


void CrearVentana(char *Texto){
    initwindow(1529, 780, Texto);
    srand (time(NULL));
}

void AgregarLinea(Color colores, int x){
    setcolor (COLOR (0, 0, 0));
    line (x, 780, x, 0);

    setcolor (COLOR (colores.Red, colores.Green, colores.Blue));
    line (x, 780, x, (colores.altura- 780) * -1);
}

int getAltura(Color colorin){
    int Altura = ((colorin.priodidad-1)*130) + (rand() % 130+1);

    return  Altura;
}


Color nuevoColor(){
    Color nuevo;

    int numero = rand() % 6 +1;
    switch(numero){
    case 1:
        nuevo.Red =  255;
        nuevo.Green =  0;
        nuevo.Blue =  rand() % 256;
        nuevo.priodidad = 1;

        break;

    case 2:
        nuevo.Red = rand() % 256;
        nuevo.Green =  0;
        nuevo.Blue =  255;
        nuevo.priodidad = 2;
        break;

    case 3:
        nuevo.Red =  0;
        nuevo.Green = rand() % 256;
        nuevo.Blue =  255;
        nuevo.priodidad = 3;
        break;

    case 4:
        nuevo.Red =  0;
        nuevo.Green = 255;
        nuevo.Blue =  rand() % 256;
        nuevo.priodidad = 4;
        break;

    case 5:
        nuevo.Red =  rand() % 256;
        nuevo.Green = 255;
        nuevo.Blue =  0;
        nuevo.priodidad = 5;
        break;

    case 6:
        nuevo.Red =  255;
        nuevo.Green = rand() % 256;
        nuevo.Blue =  0;
        nuevo.priodidad = 6;
        break;
    }

    nuevo.altura = getAltura(nuevo);
    return nuevo;
}


