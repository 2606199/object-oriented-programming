
#include<iostream>
using namespace std;
class Parent{
public:
    Parent(int x){
        this->x=x;
    cout<<"this is base class"<<endl;
    }

void print(){
cout<<"variable in base class is"<<x<<endl;
}
    int getx(){
    return x;
    }
private:
    int x;
};
class Child:public Parent{
public :
    Child(int j):Parent(j){
    cout<<"This is derived class"<<endl;
    }
    //function overriding
    void print(){
cout<<"variable in derived class is"<<getx()<<endl;
}
};
int main(){
    Parent p(20);
    p.print();
    Child c(10);
    c.print();

}
