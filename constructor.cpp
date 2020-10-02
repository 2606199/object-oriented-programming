#include<iostream>
#include<string>
using namespace std;
class GradeBook{
private:
    string courseName;
    int year;
public:
    GradeBook(){
    courseName="cse";
    year=1;
    }
    string getcourseName(){
    return courseName;
    }
         int getyear(){
    return year;
    }

    void setyear(int year){
    this->year=year;
    }
    void setcourseName(string courseName)
    {
        this->courseName=courseName;
    }

};
int main(){
GradeBook gb1;
cout<<gb1.getcourseName()<<"=>"<<gb1.getyear()<<endl;
gb1.setcourseName("ECE");
gb1.setyear(2);
cout<<gb1.getcourseName()<<"=>"<<gb1.getyear()<<endl;

}

