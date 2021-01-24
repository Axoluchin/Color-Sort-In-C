void Cocktailsort(Nodo *lista){

	Nodo *viaje = lista, *seg_viaje;
	Color altura;

	while(viaje->Siguiente != NULL){

		seg_viaje = lista;
		//pa la derecha
		while(seg_viaje->Siguiente != NULL){

			if (seg_viaje->RGB.altura > seg_viaje->Siguiente->RGB.altura){ // Ordena el array de mayor a menor, cambiar el "<" a ">" para ordenar de menor a mayor
                altura = seg_viaje->RGB;
                seg_viaje->RGB = seg_viaje->Siguiente->RGB;
                seg_viaje->Siguiente->RGB = altura;
			}

			seg_viaje = seg_viaje->Siguiente;
		}


		//pa la izquierda
		while(seg_viaje->Atras != NULL){
			//Comparando valores
			if (seg_viaje->RGB.altura < seg_viaje->Atras->RGB.altura){ // Ordena el array de mayor a menor, cambiar el "<" a ">" para ordenar de menor a mayor
                altura = seg_viaje->RGB;
                seg_viaje->RGB = seg_viaje->Siguiente->RGB;
                seg_viaje->Siguiente->RGB = altura;
			}

			seg_viaje = seg_viaje->Atras;
		}

    viaje = viaje->Siguiente;
	}

}

