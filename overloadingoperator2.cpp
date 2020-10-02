#include<iostream>
using namespace std;
class complex{
public:
	friend complex operator+(complex const &,complex const &);
	complex(int r=0,int i=0){
		real=r;
		imag=i;
	}
void print(){
	cout<<real<<"+"<<imag<<"i"<<endl;
	}
private:
	int real,imag;
};
complex operator+(complex const &obj1,complex const &obj2){
	//complex result;
	//result.real=obj1.real+obj2.real;
	//result.imag=obj2.imag+obj2.imag;
	//return result;
	return complex(obj1.real+obj2.real,obj1.imag+obj2.imag);
}


int main(){
complex c1(4,3),c2(2,7);
complex c3=c1+c2;
c1.print();
c2.print();
c3.print();
}
