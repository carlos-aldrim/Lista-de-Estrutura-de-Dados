#include "quadrado.h"
#include <stdio.h>

float areaQuadrado(Quadrado *quadrado) {
	float areaQuadrado;
	areaQuadrado = (quadrado->ladoQuadrado * 4);
	return areaQuadrado;
}

float perimetroQuadrado(Quadrado *quadrado) {
	float perimetroQuadrado;
	perimetroQuadrado = quadrado->ladoQuadrado * quadrado->ladoQuadrado;
	return perimetroQuadrado;
}
