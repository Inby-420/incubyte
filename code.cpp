#include<iostream>
#include<string>
using namespace std;

class StringCalculator {

    int add(string numbers) {
        
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
    

    return 0;
}