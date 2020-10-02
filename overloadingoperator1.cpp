#include<iostream>
using namespace std;
class complex{
public:
complex(int real=0,int imag=0)
{
	this->real=real;
	this->imag=imag;
}
void print(){
cout<<real<<"+"<<imag<<"i"<<endl;
}
complex operator+(complex const &obj){
	complex result;
	result.real=real+obj.real;
	result.imag=imag+obj.imag;
	return result;
}
private:
	int real;
	int imag;
};
int main(){
complex c1(4,5),c2(3,2);
complex c3=c1+c2;
c1.print();
c2.print();
c3.print();
}
