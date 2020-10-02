#include<iostream>
#include<string.h>
using namespace std;
class GradeBook{
private:
int year;
public:
void setyear(int y){
    if (y<0)
        cout<<"invalid input";
else
year =y;
}
int getyear(){
return year;
}
};
int main()
{
GradeBook gb;
gb.setyear(-2);
cout<<gb.getyear()<<endl;
gb.setyear(4);
cout<<gb.getyear()<<endl;
}
