#include<iostream>
#include<string.h>
using namespace std;
class GradeBook{
private:
string courseName;
public:
void setcourseName( string course){
courseName=course;
}
string getcourseName(){
return courseName;
}
void display(){
cout<<"Welcome to GradeBook and "<<courseName<<endl;
}
};
int main()
{
GradeBook gb;
gb.setcourseName("ECE");
string course=gb.getcourseName();
cout<<"value returned"<<course<<endl;
gb.display();
}
