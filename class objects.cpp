#include<iostream>
using namespace std;
class GradeBook{
public:
    int x=8;
    void display()
    {
    cout<<"Welcome to the GradeBook"<<endl;
    }
};
int main(){
GradeBook gb;
gb.display();
cout<<gb.x;

}
