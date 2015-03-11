//Autor:Oscar GArcia Avila
//Date: 2/22/2015
//Version:01
//Homework  03, about casting between diferent data types
//en esta tarea se declararan tres tipos diferentes de variables y se aran conversiones a diferentes tipos de datos 
#include <iostream>//biblioteca
int main(){
	float c=5.4;//declaramos una variable de tipo decimal
	double x=10.53;//declaramos variable de tipo entero
    int b=x;//declaramos variable de tipo entero y lo igualamos al valor de x
    std::cout<<"b esta declarado como b=x solo que x es de tipo double y b entero"<<std::endl;
    std::cout<<"valor c:  "<< c<<std::endl;
	std::cout<<"valor b:  "<< b<<std::endl;//se imprime el valor de cada dato al inicio
	std::cout<<"valor x:  "<< x<<std::endl;
	std::cout<<"si igualamos el valor de x=c nos da como resultado"<<std::endl;
    x=c;//igualamos x a c
    std::cout<<"valor x: "<< x<<std::endl;//se imprime el nuevo valor de x
   	std::cout<<"si igualamos el valor de b=c nos da como resultado"<<std::endl;
    b=c;
    std::cout<<"valor b: "<< b<<std::endl;//se imprime el nuevo valor de b
    system("PAUSE");//pausa en el sistema
    return 0;//esto regresa un valor de cero
}
