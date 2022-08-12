// a) se puede usar el operador condicional y un if
#include <stdio.h>
#include "../getnum2.c"
int main() {
int a = getint("Ingrese un número entero\n");

if (a == 0) {
	printf("Es mayor que cero\n");
} else {
	printf("Es %s que cero\n", (a > 0) ? "mayor": "menor");
}
}

// b) no hace falta operador condicional pues la expresion b > 0 es o 0 o 1 por definición
//
// c) se podría usar un for loop lo que haría más fácil la lectura del programa y aclarar que hace la función que no cambia a la variable a
//
// se puede usar un operador condicional
// a = (b > 0) ? 1 : 0
//
// e) se hace dificil la lectura, se puede unir en una sola condición más compleja y usar 1 solo if
if ( a > 0 && b < 0 ) 
	c = 10;
else 
	c = 20;

// f) se pueden evitar el i += 1 y el i = 0, usando la declaración adentro del for loop

int i, a = 10;
for (i = 0; i < 10; i++) {
	a += getint("");
}
// g) se puede simplificar el programa sacando el caso 0 para afuera e inicializando suma afuera

int i, suma = getint("Ingrese la base\n");
for (i = 1; i < 100; i++) {
	suma += i;
}
printf("La suma es %d\n");

// h)  usa dim que no inicializa, luego podría separar el caso 0 para afuera del loop 
// medio raro el tema, el programa busca el último item de un array, ahora si la condición nunca se cumple que hace, no cambia nunca last y no se queda con el último número
//
// cant = 1;
// int i = 0;
// int last = v[i];
// for (i = 1; i < dim; i++) {
//     if (last != v[i]) {
//        last=v[i]
//     }
//     cant ++
// }
