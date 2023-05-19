#include <iostream>
#include "Operacion.h"
#include "imprimir.h"
#include "miclase.h"
#include "operadorDos.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Operacion op1(5,4);
	Operacion op2(6,11);
	std::cout<<op1.getA() << "+"<<op1.getB()<<"+"<< op2.getA()<<"+"<<op2.getB()<<"="<<op1+op2<<std::endl; 
	
	// Operdor <<
	ImpDato<int> dato1("Dato 1", 10);
    ImpDato<double> dato2("Dato 2", 3.14);

    std::cout << dato1 << std::endl;
    std::cout << dato2 << std::endl;
	
	OperadorDos obj1(5);
    OperadorDos obj2(10);

    if (obj1 >= obj2) {
        std::cout << "obj1 es mayor o igual que obj2" << std::endl;
    } else {
        std::cout << "obj1 es menor que obj2" << std::endl;
    }
	return 0;
}