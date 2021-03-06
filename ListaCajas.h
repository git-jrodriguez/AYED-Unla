#ifndef __LISTACAJAS_H__
#define __LISTACAJAS_H__

#ifndef NULL
#define NULL      0
#endif
#include "caja.h"
/******************************************************************************/
/* Definiciones de Tipos de Datos */
/*--------------------------------*/

/* tipo enumerado para realizar comparaciones */

/* Tipo de Informacion que esta contenida en los Nodos de la
   ListaCajas, identificada como Dato. */
typedef Caja caja;

/* Tipo de Estructura de los Nodos de la ListaCajas. */
struct NodoListaCajas {
    Caja caja; // caja almacenado
    NodoListaCajas* sgte; // puntero al siguiente
};

/* Tipo de Puntero a los Nodos de la ListaCajas, el cual se usa para recorrer
   la ListaCajas y acceder a sus Datos. */
typedef NodoListaCajas* PtrNodoListaCajas;


/* Tipo de Estructura de la ListaCajas */
struct ListaCajas{
    PtrNodoListaCajas primero;      // puntero al primer nodo de la lista
};


/******************************************************************************/
/* Definicion de Primitivas */
/*--------------------------*/

/*
  pre : la lista no debe haber sido creada.
  post: lista queda creada y preparada para ser usada.

  lista : estructura de datos a ser creado.
*/
void crearListaCajas(ListaCajas &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : lista Creada con crearListaCajas().
  post: Devuelve true si lista esta vacia, sino devuelve false.

  lista : lista sobre la cual se invoca la primitiva.
*/
bool listaVacia(ListaCajas &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : lista Creada con crearListaCajas().
  post: devuelve la representacion de lo Siguiente al �ltimo Nodo de la lista,
        o sea el valor Null, que en esta implementacion representa el final de
        la lista.

  return representaci�n del fin de la lista.
*/
PtrNodoListaCajas finCajas();

/*----------------------------------------------------------------------------*/
/*
  pre : lista Creada con crearListaCajas().
  post: devuelve el puntero al primer elemento de la lista, o devuelve fin() si
        esta vacia

  lista : lista sobre la cual se invoca la primitiva.
  return puntero al primer nodo.
*/
PtrNodoListaCajas primero(ListaCajas &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : lista Creada con crearListaCajas().
  post: devuelve el puntero al nodo proximo del apuntado, o devuelve fin() si
        ptrNodo apuntaba a fin() o si lista esta vacia.

  lista : lista sobre la cual se invoca la primitiva.
  prtNodo : puntero al nodo a partir del cual se requiere el siguiente.
  return puntero al nodo siguiente.
*/
PtrNodoListaCajas siguiente(ListaCajas &lista, PtrNodoListaCajas ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista Creada con crearListaCajas().
        ptrNodo es un puntero a un nodo de lista.
  post: devuelve el puntero al nodo anterior del apuntado, o devuelve fin() si
        ptrNodo apuntaba al primero o si lista esta vacia.

  lista : lista sobre la cual se invoca la primitiva.
  prtNodo : puntero al nodo a partir del cual se requiere el anterior.
  return puntero al nodo anterior.
*/
PtrNodoListaCajas anterior(ListaCajas &lista, PtrNodoListaCajas ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearListaCajas().
  post: devuelve el puntero al ultimo nodo de la lista, o devuelve fin() si
        si lista esta vacia.

  lista : lista sobre la cual se invoca la primitiva.
  return puntero al �ltimo nodo.
*/
PtrNodoListaCajas ultimo(ListaCajas &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearListaCajas().
  post: agrega un nodo nuevo al principio de la lista con el dato proporcionado
        y devuelve un puntero a ese elemento.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a adicionar al principio de la lista.
  return puntero al nodo adicionado.
*/
PtrNodoListaCajas adicionarPrincipio(ListaCajas &lista, Caja caja);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearListaCajas().
  post: agrega un nodo despues del apuntado por ptrNodo con el dato
        proporcionado y devuelve un puntero apuntado al elemento insertado.
        Si la lista esta vac�a agrega un nodo al principio de esta y devuelve
        un puntero al nodo insertado. Si ptrNodo apunta a fin() no inserta
        nada y devuelve fin().

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a adicionar.
  ptrNodo : puntero al nodo despu�s del cual se quiere adicionar el dato.
  return puntero al nodo adicionado.
*/
PtrNodoListaCajas adicionarDespues(ListaCajas &lista, Caja caja, PtrNodoListaCajas ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearListaCajas().
  post: agrega un nodo al final de la lista con el dato proporcionado y devuelve
        un puntero al nodo insertado.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a adicionar al final de la lista.
  return puntero al nodo adicionado.
*/
PtrNodoListaCajas adicionarFinal(ListaCajas &lista, Caja caja);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearListaCajas().
  post: agrega un nodo con el dato proporcionado antes del apuntado por ptrNodo
        y devuelve un puntero al nodo insertado. Si la lista esta vacia no
        inserta nada y devuelve fin(). Si ptrNodo apunta al primero, el nodo
        insertado sera el nuevo primero.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a adicionar.
  ptrNodo : puntero al nodo antes del cual se quiere adicionar el dato.
  return puntero al nodo adicionado.
*/
PtrNodoListaCajas adicionarAntes(ListaCajas &lista, Caja caja, PtrNodoListaCajas ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearListaCajas(), no vacia. ptrNodo es distinto de fin().
  post: coloca el dato proporcionado en el nodo apuntado por ptrNodo.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a colocar.
  ptrNodo : puntero al nodo del cual se quiere colocar el dato.
*/
void colocarCaja(ListaCajas &lista, Caja &caja, PtrNodoListaCajas ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearListaCajas(), no vacia. ptrNodo es distinto de fin().
  post: devuelve el dato del nodo apuntado por ptrNodo.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento obtenido.
  ptrNodo : puntero al nodo del cual se quiere obtener el dato.
*/
void obtenerCaja(ListaCajas &lista, Caja &caja, PtrNodoListaCajas ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearListaCajas().
  post: elicaja el nodo apuntado por ptrNodo. No realiza accion si la lista
        esta vacia o si ptrNodo apunta a fin().

  lista : lista sobre la cual se invoca la primitiva.
  ptrNodo : puntero al nodo que se desea elicajar.
*/
void elicajarNodo(ListaCajas &lista, PtrNodoListaCajas ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearListaCajas().
  post: si la lista no esta vacia, elicaja su nodo primero, sino no realiza
        accion alguna.

  lista : lista sobre la cual se invoca la primitiva.
*/
void elicajarNodoPrimero(ListaCajas &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearListaCajas().
  post: si la lista no esta vacia elicaja su nodo ultimo,
        sino no realiza accion.

  lista : lista sobre la cual se invoca la primitiva.
*/
void elicajarNodoUltimo(ListaCajas &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearListaCajas().
  post: elicaja todos los Nodos de la lista quedando destruida e inhabilitada
        para su uso.

  lista : lista sobre la cual se invoca la primitiva.
*/
void elicajarListaCajas(ListaCajas &lista);


/******************************************************************************/
/* Definici�n de Operaciones Adicionales */
/*---------------------------------------*/

/*
  pre : lista fue creada con crearListaCajas().
  post: si el dato se encuentra en la lista, devuelve el puntero al primer nodo
        que lo contiene. Si el dato no se encuentra en la lista devuelve fin().

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a localizar.
  return puntero al nodo localizado o fin().
*/
PtrNodoListaCajas localizarCaja(ListaCajas &lista , Caja caja);

/*----------------------------------------------------------------------------*/
/*
  pre : lista fue creada con crearListaCajas() y cargada con datos ordenados de
        menor a mayor respecto del sentido progresivo.
  post: agrega a la lista el dato manteniendo el orden pero con multiples
        valores iguales y devuelve un puntero al nodo insertado.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a insertar.
  return puntero al nodo insertado.
*/
PtrNodoListaCajas insertarCaja(ListaCajas &lista, Caja caja);

/*----------------------------------------------------------------------------*/
/*
  pre : la lista fue creada con crearListaCajas().
  post : elicaja el dato de la lista, si el mismo se encuentra.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a elicajar.
*/
void elicajarCaja(ListaCajas &lista, Caja caja);

/*----------------------------------------------------------------------------*/
/*
  pre : la lista fue creada con crearListaCajas().
  post : reordena la lista.

  lista : lista sobre la cual se invoca la primitiva.
*/
void reordenar(ListaCajas &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : la lista fue creada con crearListaCajas().
  post : devuelve la cantidad de datos que tiene la lista.

  lista : lista sobre la cual se invoca la primitiva.
*/
int longitud(ListaCajas &lista);

#endif


