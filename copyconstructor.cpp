#include<iostream>
using namespace std;
class point{
private:
	int x,y;
public:
	point(int x,int y): x(x),y(y){}
void print(){
cout<<"x= "<<x<<"y= "<<y<<endl;
}
point(const point &p2){
x=p2.x;
y=p2.y;
}
};
int main(){
point p2(3,4);
point p1=p2;
cout<<"p2= "<<endl;
p2.print();
cout<<"p1= "<<endl;
p1.print();
}
