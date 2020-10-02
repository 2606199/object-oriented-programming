#include<iostream>
#include<string>
using namespace std;
class average{
private:
float m1,m2,m3;
public:
average(float m1,float m2,float m3){
this->m1=m1;
this->m2=m2;
this->m3=m3;
}
float getm1(){
return m1;
}
float getm2(){
return m2;
}
float getm3(){
return m3;
}
};
int main(){
average student(98.0,89.0,100.0);
cout<<"average marks of student: "<<(student.getm1()+student.getm2()+student.getm3())/3;
}
