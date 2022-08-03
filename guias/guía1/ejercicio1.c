int 
main(void)
{
	/* Esto es un primer comentario
	 */
	\* Que buen comentario! *\
	/* Es valido /* o no */ este comentario? */
	/    *  Esto es un último comentario */

}


// ejercicio1.c: In function ‘main’:
// ejercicio1.c:6:9: error: stray ‘\’ in program
//     6 |         \* Que buen comentario! *\
//       |         ^
// ejercicio1.c:6:12: error: ‘Que’ undeclared (first use in this function)
//     6 |         \* Que buen comentario! *\
//       |            ^~~
// ejercicio1.c:6:12: note: each undeclared identifier is reported only once for each function it appears in
// ejercicio1.c:6:15: error: expected ‘;’ before ‘buen’
//     6 |         \* Que buen comentario! *\
//                      ^~~~~
//   Básicamente están mal armados los comentarios, la estructura no es válida
