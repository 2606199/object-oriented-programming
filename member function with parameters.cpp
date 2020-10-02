#include<iostream>
#include<string>
using namespace std;
class GradeBook{
public:
 void display(string courseName){
 cout<<"Welcome to GradeBook and "<<courseName<<endl;
 }
 };
 int main(){
 GradeBook gb;
 string course;
 cout<<"Enter course";

 getline(cin,course);
 gb.display(course);


 }
