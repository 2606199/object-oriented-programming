#include<iostream>
using namespace std;
class count{
public:
       friend void change(count &,int);
        count(int x=0){
                this->x=x;
        }
        void print(){
                cout<<"x= "<<x<<endl;
        }
private:
        int x;
};
void change(count &counter,int x){
        counter.x=x;
}
int main(){
count counter;
counter.print();
change(counter,10);
counter.print();
}
