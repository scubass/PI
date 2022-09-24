
int
asendente(const int vector[FILS][COLS])
{
	int asendente = 1, descendente = 1;
	for ( int i = 0; i < FILS; i++ ) {
		for (int j = 1; j < COLS && (asendente || descendente); j++) {
			
			// chequeo condicion para q no sea ascendente
			if ( vector[i][j] < vector[i][j - 1] ) {
				asendente = 0;
			}
			// chequeo condicion para que no sea descentene
			else if (vector[i][j] > vector[i][j - 1]) {
				descendente = 0;
			}
		}
	}
	

	if (asendente != 0) {
		return 1;
	}
	else if (descendente != 0) {
		return -1;
	}
	else {
		return 0;
	}
}
