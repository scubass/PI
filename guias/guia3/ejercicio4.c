// Problema del else colgante. Determine la salida estándar para cada uno de los
// siguientes casos, cuando x es 9, y es 11. Advierta que el compilador ignora las
// indentaciones. El compilador siempre asocia un else con el if anterior, a menos que se
// le indique lo contrario con llaves {}. A primera vista el programador tal vez no esté
// seguro de cuál if coincide con cuál else, ésto se conoce como el problema del "else
// colgante". Se eliminaron las sangrías para hacer el problema un poco más 'interesante'.
// Determinar la salida primero haciendo el seguimiento y luego comprobándola con
// la PC.
//
// a) if (x < 10)
// if (y > 10)
// printf("#######\n");
// else
// printf("%%%%%\n");
// printf("********\n");            x = 9, y = 11   a) => ########
// b) if (x < 10) { 				    b) => ########
// if (y > 10)
// printf("########\n");
// }
// else {
// printf("%%%%%\n");
// printf("********\n”);
// }
//
// Programación Imperativa - Guía de T.P. 3
//
// I.T.B.A. - 2010
//
// 3
//
// c) Corregir el siguiente fragmento de código (agregando o quitando llaves) para que el
// cartel impreso coincida con los valores de cada variable.
// if ( x < 3 ) {
// printf("x < 3");
// if ( z < 5 )
// printf("x < 3 y z < 5") 
// } ;
// else
// printf("x >= 3");
//
// d) Idem ejercicio anterior
// if ( x == 1){ 
// if ( z > 1)
// printf("x == 1 y z > 1");
//  }
// else { 
// if ( x > 1)
// printf("x > 1") };
// else { 
// printf("x < 1") };