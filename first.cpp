#include <iostream>
#include <string>
using namespace std;

class Instructors{
    public:
        string name;
        int duty_hours;
    person(){

    }
};

class Choreographer : public Instructors{
    public:
        float salary;

    void getinfo(){
        cout << "name: " << name << endl;
        cout << "duty_hours: " << duty_hours << endl;
        cout << "salary: " << salary << endl;
    }
};

int main() {
    Choreographer C1;
    C1.name = "Rahul";
    C1.duty_hours = 6 ;
    C1.salary = 50,000;

    C1.getinfo();
    return 0;
}
