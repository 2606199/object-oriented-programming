#include<iostream>
#include<string>
using namespace std;
class rectangle{
private:
int length;
int breadth;
public:
rectangle(int len=0,int bre=0){
this->length=len;
this->breadth=bre;
}
int getlen(){
return length;
}
int getbre(){
return breadth;
}
};
int main(){
rectangle r1;
rectangle r2(30,20);
cout<<"area of rectangle 1 :"<<r1.getlen()*r1.getbre()<<endl;
cout<<"area of rectangle 2 :"<<r2.getlen()*r2.getbre()<<endl;

}
