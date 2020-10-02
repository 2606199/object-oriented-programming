#include<iostream>
#include<string>
using namespace std;
class GradeBook{
private:
    string courseName;
    int year;
public:
    GradeBook(string courseName="ECE",int year=4){
    this->courseName=courseName;
    this->year=year;
    }
    string getcourseName(){
    return courseName;
    }
         int getyear(){
    return year;
}
};
int main(){
GradeBook gb1;
GradeBook gb2("EC",3);
cout<<gb1.getcourseName()<<"=>"<<gb1.getyear()<<endl;
cout<<gb2.getcourseName()<<"=>"<<gb2.getyear()<<endl;

}

