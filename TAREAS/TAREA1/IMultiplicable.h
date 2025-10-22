/***********************************************************************
 * Module:  IMultiplicable.h
 * Author:  USUARIO
 * Modified: miércoles, 22 de octubre de 2025 2:19:45
 * Purpose: Declaration of the class IMultiplicable
 ***********************************************************************/

#if !defined(__MultiplicacionDeFracciones_IMultiplicable_h)
#define __MultiplicacionDeFracciones_IMultiplicable_h

class IMultiplicable
{
public:
   virtual Fraccion multiplicar(Fraccion otra)=0;

protected:
private:

};

#endif