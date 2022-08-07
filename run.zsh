if [ -e ejercicio$1.c ]; then
	gcc -o $1 -Wall --pedantic -std=c99 ejercicio$1.c
else
	touch ejercicio$1.c
fi
