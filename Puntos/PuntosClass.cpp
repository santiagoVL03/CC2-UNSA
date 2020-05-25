#include <iostream>

using namespace std;

class punto
{
protected:
    int x, y;
public:
    punto ();
    punto (int, int);
    int getX () const;
    int getY () const;
    void setX (const int );
    void setY (const int );
};


punto :: punto ()
{
    x = 0;
    y = 0;
}

punto :: punto (int _x, int _y)
{
    x = _x;
    y = _y;
}

int punto :: getX () const
{
    cout << "El valor actual de X es "<< x <<endl ;
    return x;
}

int punto :: getY () const
{
    cout << "El valor actual de Y es "<< y <<endl ;
    return y;
}

void punto :: setX (const int nuevo_x)
{
    x = nuevo_x;
}

void punto :: setY (const int nuevo_y)
{
    y = nuevo_y;
}

int main ()
{
    punto P1(2,4);
    P1.setX(2);
    P1.setY(3);
    int a = P1.getX();
    int b = P1.getY();
}
