/***********************************************************************
 * Module:  Fraccion.h
 * Author:  USUARIO
 * Modified: miércoles, 22 de octubre de 2025 4:03:42
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/

#if !defined(__SobrecargaFunciones_Fraccion_h)
#define __SobrecargaFunciones_Fraccion_h

#include <IOperable.h>

class Fraccion : public IOperable
{
public:
   class T
   {
   public:
   protected:
   private:
   
   };

   Fraccion::T sumar(Fraccion::T otra);
   Fraccion::T restar(Fraccion::T otra);
   Fraccion::T multiplicar(Fraccion::T otra);
   Fraccion::T dividir(Fraccion::T otra);

protected:
private:
   Fraccion::T numerador;
   Fraccion::T denominador;


};

#endif