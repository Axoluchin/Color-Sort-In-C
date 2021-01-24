void intercambiar(int *a, int *b) {
  int temporal = *a;
  *a = *b;
  *b = temporal;
}


int particion(int arreglo[], int izquierda, int derecha) {
  // Elegimos el pivote, es el primero
  int pivote = arreglo[izquierda];
  // Ciclo infinito
  while (1) {
    // Mientras cada elemento desde la izquierda est� en orden (sea menor que el
    // pivote) contin�a avanzando el �ndice
    while (arreglo[izquierda] < pivote) {
      izquierda++;
    }
    // Mientras cada elemento desde la derecha est� en orden (sea mayor que el
    // pivote) contin�a disminuyendo el �ndice
    while (arreglo[derecha] > pivote) {
      derecha--;
    }
    /*
    Si la izquierda es mayor o igual que la derecha significa que no
    necesitamos hacer ning�n intercambio
    de variables, pues los elementos ya est�n en orden (al menos en esta
    iteraci�n)
    */
    if (izquierda >= derecha) {
      // Indicar "en d�nde nos quedamos" para poder dividir el arreglo de nuevo
      // y ordenar los dem�s elementos
      return derecha;
    } else {//Nota: yo s� que el else no hace falta por el return de arriba, pero as� el algoritmo es m�s claro
      /*
      Si las variables quedaron "lejos" (es decir, la izquierda no super� ni
      alcanz� a la derecha)
      significa que se detuvieron porque encontraron un valor que no estaba
      en orden, as� que lo intercambiamos
      */
      intercambiar(&arreglo[izquierda], &arreglo[derecha]);
      /*
      Ya intercambiamos, pero seguimos avanzando los �ndices
      */
      izquierda++;
      derecha--;
    }
    // El while se repite hasta que izquierda >= derecha
  }
}

// Divide y vencer�s
void quicksort(int arreglo[], int izquierda, int derecha) {
  if (izquierda < derecha) {
    int indiceParticion = particion(arreglo, izquierda, derecha);
    quicksort(arreglo, izquierda, indiceParticion);
    quicksort(arreglo, indiceParticion + 1, derecha);
  }
}

int QuitsMain(Nodo* lista, int longitud) {
  // El arreglo
  int arreglo[] = {28, 11, 96, -5, 21, 18, 12, 22, 30, 97, -1, -40, -500};
  /*
  Calcular la longitud, puede ser definida por ti o calculada:
  https://parzibyte.me/blog/2018/09/21/longitud-de-un-arreglo-en-c/
  */

  /*
  Imprimirlo antes de ordenarlo
  */
  for (int x = 0; x < longitud; x++) {
  }
  // Un salto de l�nea

  /*
  Invocar a quicksort indicando todo el arreglo, desde 0 hasta el �ndice final
  */
  quicksort(arreglo, 0, longitud - 1);
  /*
  Imprimirlo despu�s de ordenarlo
  */
  for (int x = 0; x < longitud; x++){

  }
  return 0;
}
