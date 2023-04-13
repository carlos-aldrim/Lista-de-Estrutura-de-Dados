#include "triangulo.h"
#include <stdio.h>

float areaTriangulo(Triangulo *triangulo) {
	float areaTriangulo;
	areaTriangulo = (triangulo->baseTriangulo * triangulo->alturaTriangulo)/2;
	return areaTriangulo;
}

float perimetroTriangulo(Triangulo *triangulo) {
	float perimetroTriangulo;
	perimetroTriangulo = (triangulo->baseTriangulo + triangulo->ladoTriangulo1 + triangulo->ladoTriangulo2);
	return perimetroTriangulo;
}

void tipoTriangulo(Triangulo *triangulo) {
	if ((triangulo->baseTriangulo==triangulo->ladoTriangulo1)&&(triangulo->ladoTriangulo1==triangulo->ladoTriangulo2)) {
		printf("\nO triangulo e Equilatero");
	}
	else {
		if ((triangulo->baseTriangulo!=triangulo->ladoTriangulo1)&&(triangulo->baseTriangulo!=triangulo->ladoTriangulo2)&&(triangulo->ladoTriangulo1!=triangulo->ladoTriangulo2)) {
			printf("\nO triangulo e Escaleno");
		}
		
		else {
			printf("\nO triangulo e Isosceles");
		}
	}
}
