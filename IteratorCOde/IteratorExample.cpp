#include <iostream>

using namespace std;

class IteratorVector;

class Vector
{
private:
    int * _datos;
    int _size;
    int _act;
    friend class IteratorVector;
public:
    Vector(int expa);
    int getValor (int pos);
    void addEnd (int val);
    void setValor (int pos, int valor);
    int dimension();
};

Vector::Vector(int expa)
{
    _datos = new int [expa];
    _size = expa;
    _act = 0;
}

int Vector::getValor(int pos)
{
    return _datos[pos];
}

void Vector::addEnd(int val)
{
    if (_act < _size)
    {
        _datos[_act] = val;
        _act++;
    }
    else
        cout<< "Ya no hay espacio en el vector ";
}

void Vector::setValor(int pos, int valor)
{
    _datos[pos] = valor;
}

int Vector::dimension ()
{
    return _size;
}

class IteratorVector
{
private:
    int * _vector;
    int _position, _size2;

public:
    IteratorVector(Vector& vector);
    int operator++ ();
    bool hasNext() const;
    //void addEnd (int val);
};


IteratorVector :: IteratorVector (Vector& vector)
{
    _vector = vector._datos;
    _position = 0;
    _size2 = vector._size;
}

int IteratorVector :: operator++ ()
{
    int valor = *( _vector + _position );
    _position++;
    return valor;
}

bool IteratorVector :: hasNext() const
{
    if ( _position < _size2)
        return true;
    else
        return false;
}

int main ()
{
    Vector vector1(5);
    vector1.addEnd(1);
    vector1.addEnd(2);
    vector1.addEnd(3);
    vector1.addEnd(4);
    vector1.addEnd(5);
    IteratorVector iterator1(vector1);

    while (iterator1.hasNext() == true)
        cout << ++iterator1;
}
