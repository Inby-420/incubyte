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
        number = numbers[0] - 48;
        return number;
    }

};

int testCase(string test) {
    
    
    if (test == "") return 0;
    if (test == ".") return 0;
    if (test == ",") return 0;
    if (test == "1") return 1;
    
    else {
        cout<<"failed testcase"<<endl;
        return -1;
    }
    
}

void result(int n1, int number) {
    if (number == -1) {
        cout<<"runtime error";
        return;
    }
        
    if (n1 == number) cout<<"accepted!";
    else cout<<"rejected!";
    cout<<endl;
}
int main() {
    
    StringCalculator obj;
    string test = "2";
    int number = obj.add(test);
    int n1 = testCase(test);
    result(n1,number);
    return 0;
}