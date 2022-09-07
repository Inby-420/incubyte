#include<iostream>
#include<string>
using namespace std;

class StringCalculator {
    int number;
    
    public:
    StringCalculator() {
        number = 0;
    }
    int add(string numbers) {
        return number;
    }

};

void testCase() {
    StringCalculator obj;
    
    string test = "";
    //test 
    int number = obj.add("");
    if (number == -1) cout<<"runtime error";
    else if (number == 0) cout<<"accepted!";
}
int main() {
    testCase();

    return 0;
}