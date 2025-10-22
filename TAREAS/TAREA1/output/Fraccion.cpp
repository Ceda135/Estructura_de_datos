/***********************************************************************
 * Module:  Fraccion.cpp
 * Author:  USUARIO
 * Modified: mi�rcoles, 22 de octubre de 2025 2:43:20
 * Purpose: Implementation of the class Fraccion
 ***********************************************************************/

#include "Fraccion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion(int num, int den)
// Purpose:    Implementation of Fraccion::Fraccion()
// Parameters:
// - num
// - den
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion(int num, int den)
{
   numerador = num;
   denominador = den;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::multiplicar(Fraccion otra)
// Purpose:    Implementation of Fraccion::multiplicar()
// Parameters:
// - otra
// Return:     Fraccion
////////////////////////////////////////////////////////////////////////

Fraccion Fraccion::multiplicar(Fraccion otra)
{
   int nuevoNum = numerador * otra.numerador;
   int nuevoDen = denominador * otra.denominador;
   return Fraccion(nuevoNum, nuevoDen);
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::mostrar()
// Purpose:    Implementation of Fraccion::mostrar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::mostrar(void)
{
   std::cout << numerador << "/" << denominador << std::endl;
}