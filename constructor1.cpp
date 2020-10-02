#include<iostream>
#include<string.h>
using namespace std;
class cars{
public:
int wheels=4;
int mil;
string com;
cars(int mil,string com){
this->mil=mil;
this->com=com;
}
int getmil(){
return mil;
}
string getcom(){
return com;
}
int getwheels(){

return wheels;
}
};
int main(){
cars c1(10,"BMw");
cars c2(20,"honda");
cout<<c1.getmil()<<c1.getcom()<<endl;
cout<<c2.getmil()<<c2.getcom()<<endl;
cout<<c1.wheels<<c2.wheels;

}
