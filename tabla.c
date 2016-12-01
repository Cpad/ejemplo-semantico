 #include "tabsim.h"
 
 simbolo * crear() {
	return NULL;
 };
	

/* la T se refiere al elemento que esta en la parte alta de la pila */
/* al principio el siguiente de ese apunta a nulo */
 void insertar(simbolo **pT, simbolo *s) {
	s->sig = (*pT);				/* el siguiente del principio apunta a nulo, en caso que empiece a subir apunta al siguiente */
	(*pT) = s;
 };


 simbolo *buscar(simbolo *t, char nombre[20]){
	while ( (t != NULL) && (strcmp(nombre, t->nombre)) )
		t = t->sig;
	return (t);
 };

 
 void imprimir(simbolo * t) {
	while (t != NULL) {
		printf("%s\n", t->nombre);		
		t = t->sig;
	}
};
