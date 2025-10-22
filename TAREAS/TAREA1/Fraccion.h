/***********************************************************************
 * Module:  Fraccion.h
 * Author:  USUARIO
 * Modified: mi�rcoles, 22 de octubre de 2025 2:43:20
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/

#if !defined(__MultiplicacionDeFracciones_Fraccion_h)
#define __MultiplicacionDeFracciones_Fraccion_h

#include <IMultiplicable.h>

class Fraccion : public IMultiplicable
{
public:
   Fraccion(int num, int den);
   Fraccion multiplicar(Fraccion otra);
   void mostrar(void);

protected:
private:
   int numerador;
   int denominador;


};

#endif