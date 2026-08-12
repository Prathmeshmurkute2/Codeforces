#include<iostream>
using namespace std;

class Student{
private:
    string name;
    int age;
    int *marks;
public:
    Student(string name, int age,int m){
        this->name = name;
        setAge(age);
        marks = new int(m);
    }

    void setAge(int age){
        if(age>=0){
            this->age=age;
        }else{
            this->age=0;
        }
    }

    Student(const Student &s){
        name=s.name;
        age=s.age;
        marks=s.marks;
    }
    void display(){
        cout<<name<<":"<<age<<endl;
    }

    ~Student(){
        delete marks;
        cout<<"Destructure called successfully:"<<name<<endl;
    };
};

int main(){
    Student s1("om",32,78);
    Student s2("ram",44,90);

    s1.display();
    s2.display();
  
}