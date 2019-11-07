#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo{
  private:
    double value;
    double value2;

  public:
    Complexo(double v, double v2);
    ~Complexo();
    Complexo operator+(Complexo c);
    Complexo operator-(Complexo c);
    Complexo operator*(Complexo c);
    double getValue();
    double getValue2();
};

#endif