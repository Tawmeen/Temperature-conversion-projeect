#include<iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    void display(){
        cout<<id<<" "<<gpa<<endl;
    }
    student(int x, double y){
        id = x;
        gpa = y;
    }

};


int main(){

    student tawmeen(101,3.47),dhrubo(102,3.47);
    

tawmeen.display();


dhrubo.display();


    return 0;
}