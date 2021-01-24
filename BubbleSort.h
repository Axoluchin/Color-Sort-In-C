
void BubbleSort(Nodo *lista){
    Nodo *viaje = lista, *seg_viaje;
    Color altura;

	while (viaje != NULL){
        seg_viaje = lista;
		while(seg_viaje->Siguiente != NULL){
			if (seg_viaje->RGB.altura > seg_viaje->Siguiente->RGB.altura){ // Ordena el array de mayor a menor, cambiar el "<" a ">" para ordenar de menor a mayor
                altura = seg_viaje->RGB;
                seg_viaje->RGB = seg_viaje->Siguiente->RGB;
                seg_viaje->Siguiente->RGB = altura;
			}
            seg_viaje = seg_viaje->Siguiente;
		}

        viaje = viaje->Siguiente;
	}
}

void BubbleSortRGB(Nodo *lista){
    Nodo *viaje= lista, *seg_viaje;
    int color;


    while (viaje != NULL){
        seg_viaje = lista;
        while(seg_viaje->Siguiente != NULL){


            if (seg_viaje->RGB.Green > seg_viaje->Siguiente->RGB.Green && seg_viaje->RGB.priodidad == seg_viaje->Siguiente->RGB.priodidad && seg_viaje->RGB.priodidad == 3){ // Ordena el array de mayor a menor, cambiar el "<" a ">" para ordenar de menor a mayor
                    color = seg_viaje->RGB.Green;
                    seg_viaje->RGB.Green = seg_viaje->Siguiente->RGB.Green;
                    seg_viaje->Siguiente->RGB.Green = color;
            }

            else if (seg_viaje->RGB.Green < seg_viaje->Siguiente->RGB.Green && seg_viaje->RGB.priodidad == seg_viaje->Siguiente->RGB.priodidad && seg_viaje->RGB.priodidad == 6){ // Ordena el array de mayor a menor, cambiar el "<" a ">" para ordenar de menor a mayor
                    color = seg_viaje->RGB.Green;
                    seg_viaje->RGB.Green = seg_viaje->Siguiente->RGB.Green;
                    seg_viaje->Siguiente->RGB.Green = color;
            }

            else if (seg_viaje->RGB.Red < seg_viaje->Siguiente->RGB.Red && seg_viaje->RGB.priodidad == seg_viaje->Siguiente->RGB.priodidad && seg_viaje->RGB.priodidad == 2){
                color = seg_viaje->RGB.Red;
                seg_viaje->RGB.Red = seg_viaje->Siguiente->RGB.Red;
                seg_viaje->Siguiente->RGB.Red = color;
            }

            else if (seg_viaje->RGB.Red > seg_viaje->Siguiente->RGB.Red && seg_viaje->RGB.priodidad == seg_viaje->Siguiente->RGB.priodidad && seg_viaje->RGB.priodidad == 5){
                color = seg_viaje->RGB.Red;
                seg_viaje->RGB.Red = seg_viaje->Siguiente->RGB.Red;
                seg_viaje->Siguiente->RGB.Red = color;
            }

            else if (seg_viaje->RGB.Blue > seg_viaje->Siguiente->RGB.Blue && seg_viaje->RGB.priodidad == seg_viaje->Siguiente->RGB.priodidad && seg_viaje->RGB.priodidad == 1){
                color = seg_viaje->RGB.Blue;
                seg_viaje->RGB.Blue = seg_viaje->Siguiente->RGB.Blue;
                seg_viaje->Siguiente->RGB.Blue = color;
            }
            else if (seg_viaje->RGB.Blue < seg_viaje->Siguiente->RGB.Blue && seg_viaje->RGB.priodidad == seg_viaje->Siguiente->RGB.priodidad && seg_viaje->RGB.priodidad == 4){
                color = seg_viaje->RGB.Blue;
                seg_viaje->RGB.Blue = seg_viaje->Siguiente->RGB.Blue;
                seg_viaje->Siguiente->RGB.Blue = color;
            }


            seg_viaje = seg_viaje->Siguiente;
        }

        viaje = viaje->Siguiente;
    }


}


//* void bucketSort // https://es.wikipedia.org/wiki/Algoritmo_de_ordenamiento#:~:text=En%20computaci%C3%B3n%20y%20matem%C3%
//*A1ticas%20un%20algoritmo%20de%20ordenamiento,entrada%20que%20satisfaga%20la%20relaci%C3%B3n%20de%20orden%20dada.

