// a) no inicializa la variable resultado
//
// b) la coma no va en el if y el prtf termina en ; no ,
//
// c) error no inicializa la variable var2, le falta asignarle un número
//
// d) hay 1 solo =, eso no comprara asigna y el punto y coma no va
//
// e) no encuentro el error, escribo y ejecuto
//
// #include <stdio.h>
//
// int
// main(void)
// {
// 	char c;
// 	while ((c = getchar()) != EOF) {        NO ENCUENTRO EL ERROR
// 		putchar(c);
// 	}
// }
//
// f) escribo el código
//
// #include <stdio.h>
//
// int
// main(void)
// {
// 	enum dias { LUN, MAR, MIE, JUE, VIE, SAB, DOM};   NO SE PUEDE PRITF CON ENUM; DA INT EN ESTE CASO
// 	enum dias dia = LUN;                              TENDRÍA Q PONER UN SWITCH O IF
// 	printf("Hoy es %d\n", dia);
// 	return 0;
// }
