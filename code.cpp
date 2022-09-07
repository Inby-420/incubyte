#include<iostream>
#include<string>
#include<vector>
using namespace std;

class StringCalculator {
    int number;
    
    public:
    StringCalculator() {
        number = 0;
    }
    int add(string numbers) {
        vector<int> temp;
        int tens = 1;
        for (int i=0; numbers[i] != '\0'; i++) {
            if (numbers[i] == ',') {
                int t1=0;
                for (int k=temp.size()-1; k>=0; k--) {
                    t1 += temp[k]*tens;
                    tens = tens*10;
                }
                temp.clear();
                number += t1;
                tens = 1;
            }
            else if (numbers[i] >=48 && numbers[i]<=57)
                temp.push_back(numbers[i]-48);
                
            else if (numbers[i] >=97 && numbers[i] <=122) temp.push_back(numbers[i]-96);
            
            
        }
        int t2 = 0;
        for (int k=temp.size()-1; k>=0; k--) {
                    t2 += temp[k]*tens;
                    tens = tens*10;
        }
        number += t2;
        return number;
    }

};

int testCase(string test) {
    
    
    if (test == "") return 0;
    if (test == ",") return 0;
    if (test == "1") return 1;
    if (test == "2") return 2;
    if (test == ".2") return 2;
    if (test == "1,2") return 3;
    if (test == "1,2,a") return 4;
    if (test == "1,2,a,c") return 7;
    if (test == "1,10,100") return 111;
    if (test == "1,10,100,1001") return 111;  
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
    //cout<<number;    
    if (n1 == number) cout<<"accepted!";
    else cout<<"rejected!";
    cout<<endl;
}
int main() {
    
    StringCalculator obj;
    string test = "1,10,100,1001";
    int number = obj.add(test);
    int n1 = testCase(test);
    result(n1,number);
    return 0;
}