/***********************************************************************
 * Module:  IOperable.h
 * Author:  USUARIO
 * Modified: miércoles, 22 de octubre de 2025 3:59:27
 * Purpose: Declaration of the class IOperable
 ***********************************************************************/

#if !defined(__SobrecargaFunciones_IOperable_h)
#define __SobrecargaFunciones_IOperable_h

#include <Fraccion.h>

class IOperable
{
public:
   virtual Fraccion::T sumar(Fraccion::T otra)=0;
   virtual Fraccion::T restar(Fraccion::T otra)=0;
   virtual Fraccion::T multiplicar(Fraccion::T otra)=0;
   virtual Fraccion::T dividir(Fraccion::T otra)=0;

protected:
private:

};

#endif