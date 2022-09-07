#include<iostream>
#include<string>
#include<vector>
using namespace std;
  
// -1 signifies wrong testcase  
// this code solves first 8/9 parts of the problem statement

// odd and even functionality 0// is odd and 1// is even 
// note: in this program odd and even will be decided post changes in delimiter if any 

  
class StringCalculator {
    int number;
    
    public:
    StringCalculator() {
        number = 0;
    }
    int add(string numbers) {
        vector<int> temp;
        vector<int> negatives;
        int tens = 1;
        
        bool flag = false, changee = false, odd = false, even = false;
        char delimiter = ',';
        if (numbers.length()>=4) {
            if (numbers[0] =='/' and numbers[1] == '/' and numbers[3] == '\n') {
                
                delimiter = numbers[2];
                if (delimiter >=48 and delimiter<=57 or delimiter>=97 and delimiter<=122 or delimiter >=65 and delimiter<=90) {
                    cout<<"numbers and letters are not allowed"<<endl;
                    return -1;
                }
                changee = true;
            }
        }
        int start;
        if (changee) start = 4;
        else start = 0;
        
        if (numbers.length()-start >= 3) {
            if (numbers.substr(start,4) == "0//\n") {
                odd = true;
                start += 4;
            } 
                
            
            
            else if (numbers.substr(start,4) == "1//\n") {
                even = true;
                start += 4;
            }
                
        }
        
        
        for (int i=start; numbers[i] != '\0'; i++) {
            if (numbers[i] == delimiter or numbers[i] == '\n' and numbers[i-1] != ',') {
                
                int t1=0;
                for (int k=temp.size()-1; k>=0; k--) {
                    t1 += temp[k]*tens;
                    tens = tens*10;
                }
                temp.clear();
                if (flag) negatives.push_back(t1);
                else if (t1 <=1000) number += t1;
                flag = false;
                tens = 1;
            }
            else if (numbers[i] >=48 && numbers[i]<=57)
            {
                if (odd and i%2 == 0) continue;
                if (even and i%2 == 1) continue;   
                else temp.push_back(numbers[i]-48);
                
            }
                
                
            else if (numbers[i] >=97 && numbers[i] <=122){
                if (odd and i%2 == 0) continue;
                if (even and i%2 == 1) continue;
                else temp.push_back(numbers[i]-96);
            } 
            else if (numbers[i] == '-') flag = true;
            else {
                //cout<<start;
                cout<<"wrong testcase"<<endl;
                return -1;
            }
            
        }
            
        int t2 = 0;
        for (int k=temp.size()-1; k>=0; k--) {
                    t2 += temp[k]*tens;
                    tens = tens*10;
        }
        if (flag) negatives.push_back(t2);
        else if (t2 <=1000) number += t2;
        
    
        
        try {
            int x = -1;
            if (negatives.size() >= 1) throw x;
        }
        catch (int x) {
            cout<<"Exception caught, -ve numbers not allowed"<<endl;
            cout<<"list of negatives: ";
            for (auto num: negatives) cout<<"-"<<num<<" ";
            cout<<endl;
            return -1;
            
        }
        
        return number;
    }
    

};

int testCase(string test) {
    
    
    if (test == "") return 0;
    if (test == ",") return 0;
    if (test == "1") return 1;
    if (test == "2") return 2;
    if (test == "1,2") return 3;
    if (test == "1,2,a") return 4;
    if (test == "1,2,a,c") return 7;
    if (test == "1,10,100") return 111;
    if (test == "1,10,100,1001") return 111;  
    if (test == "1,1002,100,2") return 103;
    if (test == "-2") return -1; // signifies wrong testcase
    if (test == "-3") return -1;
    if (test == "-2,1,-3") return -1;
    if (test == "1.2") return -1;
    if (test == "1\n2,3") return 6;
    if (test == "//;\n1;2") return 3;
    if (test == "//a\n1a2") return -1;
    if (test == "0//\n1,2") return 0;
    if (test == "1//\n1,2") return 3;
    if (test == "//;\n1//\n1;2") return 3;
    if (test == "//;\n0//\n1;2") return 0;
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
    string test = "//;\n0//\n1;2";
    int number = obj.add(test);
    int n1 = testCase(test);
    result(n1,number);
    return 0;
}