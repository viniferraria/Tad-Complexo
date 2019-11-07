#include <iostream>
#include "complexo.h"
using namespace std;

Complexo::Complexo(double v, double v2){
  value  = v;
  value2 = v2;
}

Complexo::~Complexo(){}
  
double Complexo::getValue(){
   return value;
  }
double Complexo::getValue2(){
    return value2;
  }

Complexo Complexo::operator+(Complexo c){
  Complexo n (value + c.getValue(), value2+c.getValue2());
  return n;
}

Complexo Complexo::operator-(Complexo c){
  Complexo n (value-c.getValue(), value2+c.getValue2());
  return n;
}

Complexo Complexo::operator*(Complexo c){
  Complexo x (value*c.getValue()-value2*c.getValue2(),value*c.getValue2()+value2*c.getValue());
  return x;
}
int main() {
  Complexo X(2, 15);
  Complexo Y(3, 18);
  Complexo A = X+Y;
  Complexo B = X-Y;
  Complexo C = X*Y;
  cout << "Teste A(soma): " << A.getValue() << " + "<<A.getValue2()<<"i" << endl;
  cout<<endl;
  cout<< "Teste B(subtração): " << B.getValue() << " + "<< B.getValue2()<<"i" << endl;
  cout<<endl;
  cout<< "Teste C(multiplicação): " <<C.getValue() << " + "<<C.getValue2()<<"i" << endl;
  return 0;
}