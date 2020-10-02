
#include<iostream>
using namespace std;
class samsung{
public:
    samsung(){
    cout<<"This is samsung  constructor"<<endl;
    }
    ~samsung(){
    cout<<"This is samsung destructor"<<endl;
    }
    void ram(){
    cout<<"6gb Ram"<<endl;
    }
    void rom(){
    cout<<"128gb Rom"<<endl;
    }
};

class iphone{
public:
    iphone(){
    cout<<"This is iphone ,this is constructor"<<endl;
    }
    ~iphone(){
    cout<<"this is destructor iphone"<<endl;
    }
};
class oppo:public samsung,public iphone{
public:
    oppo(){
    cout<<"this is oppo constructor"<<endl;
    }
    ~oppo(){

    cout<<"This is oppo destrcutor"<<endl;
    }
};
int main(){
samsung A20;
A20.ram();
A20.rom();
cout<<endl;
iphone x11;

cout<<endl;
oppo f11;
f11.ram();
f11.rom();
cout<<endl;


}
