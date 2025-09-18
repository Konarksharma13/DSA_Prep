#include<iostream>
#include<cmath>

using namespace std;

int countDigits1(int num){
    int count = 0;
    while(num > 0){
        num /= 10;
        count++;
    }
    return count;
}
// TC: O(n)
int countDigits2(int num){
    int count = (int) log10(num) + 1;
    return count;
}
// TC: O(logn)

// I/P: Enter num:56789
// O/P: 56789 have 5 digits

int reverseNumber(int num){
     int revNum= 0;
    while(num > 0){
        int rem = num%10;
        revNum = (revNum*10) + rem;
        num /= 10;
    }
    return revNum;
}
// TC: O(n)
// I/P: Enter num:123456                
// O/P: 123456 reversed is 654321

string checkPalindrome(int num){
    int revNum= 0, tempNum = num;
    while(num > 0){
        int rem = num%10;
        revNum = (revNum*10) + rem;
        num /= 10;
    }
    return tempNum == revNum ? "Palindrome" : "Not Palindrome";
}
// TC: O(n)
// I/P: Enter num:121
// O/P: 121 is Palindrome  
// I/P: Enter num:1234
// O/P: 1234 is Not Palindrome  

string checkArmstrong(int num){
     int armNum= 0, tempNum = num;
    while(num > 0){
        int rem = num%10;
        armNum += (rem*rem*rem);
        num /= 10;
    }
    return tempNum == armNum ? "an Armstrong number" : "not an Armstrong number";
}
//TC: O(n)
// I/P: Enter num:433
// O/P: 433 is not an Armstrong number
// I/P: Enter num:153
// O/P: 153 is an Armstrong number

void printAllDivisors1(int num){
    for(int i = 1;i<=num;i++){
        if(num%i == 0) 
            cout << i << " ";
    }
}
//TC: O(n)
//I/P: Enter num:36
//O/P: 36 divisor: 1 36 2 18 3 12 4 9 7 6 6

void printAllDivisors2(int num){
    for(int i = 1;i<=sqrt(num);i++){
        if(num%i == 0){
            cout << i << " ";
            if((num/i) != i) 
                cout << num/i << " ";
        }
    }
}
//TC: O(SQRT(n))
//I/P: Enter num:36
//O/P: 36 divisor: 1 36 2 18 3 12 4 9 7 6 6

string checkPrime1(int num){
    int count = 0;
    for(int i = 1;i<=num;i++){
        if(num%i == 0) 
            count++;
    }
    return count ==  2 ? "Prime number" : "not a Prime number";
}
//TC: O(n)
//I/P: Enter num:11
//O/P: 11 is Prime number
//I/P: Enter num:36
//O/P: 36 is not a Prime number

string checkPrime2(int num){
    int count = 0;
    for(int i = 1;i*i<=num;i++){
        if(num%i == 0){
            count++;
            if(num/i != i)
                count++;
        }
    }
    return count ==  2 ? "Prime number" : "not a Prime number";
}
//TC: O(SQRT(n))
//I/P: Enter num:11
//O/P: 11 is Prime number
//I/P: Enter num:36
//O/P: 36 is not a Prime number

int GCD1(int num1, int num2){
    int min = num1 > num2 ? num2:num1;
    for(int i=min;i>=1;i--){
        if(num1%i ==0 && num2%i == 0){
            return i;
            break;
        }
    }
}
//TC: O(min(n1,n2))
//I/P: Enter nums:270 670
//O/P: GCD is 10


//Euclidean Algorithm
int GCD2(int num1, int num2){
    while(num1> 0 && num2>0){
        if(num1 > num2) num1 = num1%num2;
        else num2 = num2%num1;
    }
    if(num1 == 0) return num2;
    else return num1;
}
//TC: O(log-phi(min(n1,n2))))
//I/P: Enter nums:270 670
//O/P: GCD is 10
int main(){
    // int num;
    // cout << "Enter num:";
    // cin >> num;
    // cout << num << " have " << countDigits1(num) << " digits"<<endl;
    // cout << num << " have " << countDigits2(num) << " digits";
    // cout << num << " reversed is " << reverseNumber(num);
    // cout << num << " is " << checkPalindrome(num);
    // cout << num << " is " << checkArmstrong(num);
    // cout << num << " divisor: ";
    // printAllDivisors1(num);
    // printAllDivisors2(num);
    // cout << num << " is " << checkPrime1(num);
    // cout << num << " is " << checkPrime2(num);
   
    int num1,num2;
    cout << "Enter nums:";
    cin >> num1 >> num2;
    // cout <<" GCD is " << GCD1(num1,num2);
    cout <<" GCD is " << GCD2(num1,num2);

    cout << endl;
    return 0;
}