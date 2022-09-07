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
        for (int i=0; numbers[i] != '\0'; i++) {
            if (numbers[i] >=48 && numbers[i]<=57) number += numbers[i]-48;
        }
        return number;
    }

};

int testCase(string test) {
    
    
    if (test == "") return 0;
    if (test == ".") return 0;
    if (test == ",") return 0;
    if (test == "1") return 1;
    if (test == "2") return 2;
    if (test == ".2") return 2;
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
    string test = ".2";
    int number = obj.add(test);
    int n1 = testCase(test);
    result(n1,number);
    return 0;
}