#include<iostream>
#include<string.h>
using namespace std;
class GradeBook{
private:
int age;
public:
int getage(){
return age;
}
void setage(int age){
if(age>0)
this->age=age;
}
};
int main()
{
GradeBook gb;
gb.setage(5);
cout<<gb.getage()<<endl;

}
