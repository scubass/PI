#include <stdio.h>
#include <assert.h>

/* Calcula la desviacion estandar */
double desv(const char vector[], int cantnum );


int main(void) {
  double d;
  unsigned char arreglo2[] = { 0x33, 0x33, 0x33, 0x33, 0x33 };
  for(int i=0; i <= 10; i++)
    assert(desv(arreglo2, i)==0);
  

  unsigned char arreglo[] = { 0x37, 0xF2, 0x03, 0x4A, 0xFF };
  assert(desv(arreglo, 1)==0);
  assert(desv(arreglo, 2)==2.0);

  assert(desv(arreglo, 3) > 4.98 && desv(arreglo, 3) < 4.99);

  assert(desv(arreglo, 10) > 5.6071 && desv(arreglo, 3) < 5.6072);

  puts("OK!");
}// Ejercicio 9 **
// Se desea calcular la desviación estándar de un arreglo de números enteros. Los números del arreglo toman
// valores entre 0 y 15 inclusive, por lo que para almacenar cada número se utilizarán solo 4 bits, pudiendo almacenar dos
// números en un solo byte.
// Para representar dicho arreglo se utilizará un vector de caracteres, donde cada elemento del vector contendrá dos
// números (uno en los cuatro bits superiores y el otro en los cuatro bits inferiores). Escribir una función que reciba un
// arreglo como el mencionado anteriormente y la cantidad de números que contiene y retorne en su nombre la desviación
// estándar de los números recibidos.
// Ejemplo: Si se define el siguiente arreglo:
// unsigned char arreglo[] = { 0x37, 0xF2, 0x03, 0x4A, 0xFF };
// Representa al arreglo de los elementos: 3, 7, 15, 2, 0, 3, 4, 10, 15, 15.
