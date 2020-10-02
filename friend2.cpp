#include<iostream>
using namespace std;
class count{
public:
        friend class changeX;
        count(int x=0){
                this->x=x;
        }
        void print(){
                cout<<"x= "<<x<<endl;
        }
private:
        int x;
};
class changeX{
public:
	void setx(count &counter,int x){
        counter.x=x;
}
};
int main(){
count counter;
changeX ch;
counter.print();
ch.setx(counter,10);
counter.print();
}
