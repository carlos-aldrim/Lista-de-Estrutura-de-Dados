#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "triangulo.h"
#include "quadrado.h"
#include "retangulo.h"


int main() {
	
	Triangulo funcaoTriangulo;
	printf("-> Triangulo\n");
	printf("\nBase: ");
	scanf("%f", &funcaoTriangulo.baseTriangulo);
	printf("\nAltura: ");
	scanf("%f", &funcaoTriangulo.alturaTriangulo);
	printf("\nLado 01: ");
	scanf("%f", &funcaoTriangulo.ladoTriangulo1);
	printf("\nLado 02: ");
	scanf("%f", &funcaoTriangulo.ladoTriangulo2);
	
	Quadrado funcaoQuadrado;
	printf("\n-> Quadrado\n");
	printf("\nLado: ");
	scanf("%f", &funcaoQuadrado.ladoQuadrado);
	
	Retangulo funcaoRetangulo;
	printf("\n-> Retangulo\n");
	printf("\nBase: ");
	scanf("%f", &funcaoRetangulo.baseRetangulo);
	printf("\nAltura: ");
	scanf("%f", &funcaoRetangulo.alturaRetangulo);
	
	printf("\nA area do triangulo e %.2f", areaTriangulo(&funcaoTriangulo));
	printf("\nO perimetro do triangulo e %.2f", perimetroTriangulo(&funcaoTriangulo));
	tipoTriangulo(&funcaoTriangulo);
	
	printf("\n\nA area do quadrado e %.2f", areaQuadrado(&funcaoQuadrado));
	printf("\nO perimetro do quadrado e %.2f", perimetroQuadrado(&funcaoQuadrado));
	
	printf("\n\nA area do retangulo e %.2f", areaRetangulo(&funcaoRetangulo));
	printf("\nO perimetro do retangulo e %.2f", perimetroRetangulo(&funcaoRetangulo));
	return 0;
}
