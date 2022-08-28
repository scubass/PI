// Detectar errores de compliación en el siguiente programa

#define N 10
#define M 20


int
main (void)
{
	int dim = 7;
	int vectorA[ M * N ];
	int vectorB[ -10 ];
	int vectorC[ 10.0 ];
	int vectorD[ dim ];
	vectorC[ 2.5 ] = 'a';
	vectorB[ -1 ] = 5;
	vectorC[vectorA[ 48 ]] = 5.5;
	vectorA[ 1000 ] = 0;
	vectorA[ M * N ] = 10;
	return 0;
}

// Errores por línea main
// 1) todo ok
// 2) inicializa el vectorA con 200 lugares;
// 3) ERROR no se puede inicializar un vector con cantidad negativa
// 4) ERROR no se puede inicializar un vector con un float
// 5) inicializa el vectorD con dim qu es 7;
// 6) error al intentar acceder al vectorC con un float
// 7) eror al intentar acceder al vectorB con un indice negativo
// 8) problema vectorA declarado pero no inicializado por lo que en esa posicion de memoria puede haber un número que sea mayor al rango permitido por vvectorC
// 9) vectorA indices van de 0 a 199, el 1000 se pasa y da error
