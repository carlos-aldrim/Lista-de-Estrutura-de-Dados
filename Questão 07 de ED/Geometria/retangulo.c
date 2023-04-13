#include "retangulo.h"
#include <stdio.h>

float areaRetangulo(Retangulo *retangulo) {
	float areaRetangulo;
	areaRetangulo = retangulo->alturaRetangulo * retangulo->baseRetangulo;
	return areaRetangulo;
}

float perimetroRetangulo(Retangulo *retangulo) {
	float perimetroRetangulo;
	perimetroRetangulo = ((retangulo->alturaRetangulo * 2) + (retangulo->baseRetangulo * 2));
	return perimetroRetangulo;
}
