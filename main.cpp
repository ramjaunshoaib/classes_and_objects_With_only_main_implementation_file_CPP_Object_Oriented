//main.cpp
//shoaib ramjaun @ 2018
// learning classes and objects

#include <iostream>
#include <string>
using namespace std;
class shoaib{
public:
    int age;
    string name;
    void intro(){
        cout << "My name is " << name << endl;
        cout << "I am " <<age << " !"<<endl;
    }
};

int main(){
    //the first object based on the class shoaib
    shoaib object1;
    object1.age = 18;
    object1.name = "Shoaib";
    object1.intro();
    //the second object based on the class shoaib
    shoaib object2;
    object2.age = 4;
    object2.name = "Zaki";
    object2.intro();
    return 0;
}

