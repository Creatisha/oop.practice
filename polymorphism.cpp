#include <iostream>
#include <string>
using namespace std;

class Result{
public:
    void grade(char ch){
        cout << "Grade: " << ch << endl;
    }

    void grade(string s){
        cout << "Marks: " << s << endl;
    }
};

int main(){
    Result r1;
    r1.grade("good");
    return 0 ;
}