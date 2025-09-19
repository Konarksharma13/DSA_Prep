//Recursion is the process in which a function call itself until a specified condition is met

#include<iostream>
using namespace std;


//Print hello N times using Recursion
void printHello(int i,int num){
    if(i > num) return;
    cout << "Hello" << ' ';
    printHello(i+1, num);
}
// f(1,3) -> f(2,3) -> f(3,3) -> f(4,3) -> return
// TC: O(n)
// SC: O(n)
// I/P: Enter num:3 
// O/P: Hello Hello Hello


//Print 1 -> N  using Recursion
void printNum(int i,int num){
    if(i > num) return;
    cout << i << ' ';
    printNum(i+1, num);
}
// f(1,3) -> f(2,3) -> f(3,3) -> f(4,3) -> return
// TC: O(n)
// SC: O(n)
// I/P: Enter num:3
// O/P: 1 2 3


//Print N -> 1  using Recursion
void printNumRev(int i,int num){
    if(i > num) return;
    printNumRev(i+1, num);
    cout << i << ' ';
}
// f(1,3) -> f(2,3) -> f(3,3) -> f(4,3) -> return -> 3 -> 2 -> 1 -> int main
// TC: O(n)
// SC: O(n)
// I/P: Enter num:3
// O/P: 3 2 1

//Print Sum of N numbers using Parameterized recursion
void PsumofN(int num,int sum){
    if(num < 1) {
        cout << sum;
        return;
    }
    PsumofN(num-1, sum+num);
}
// f(3,0) -> f(2,3) -> f(1,5) -> f(0,6) -> print -> return
// TC: O(n)
// SC: O(n)
// I/P: Enter num:3
// O/P: 6


//Print Sum of N numbers using Functional recursion
int FsumofN(int num){
    if(num == 0) return 0;   
    return num + FsumofN(num-1);
}

// f(3) -> 3 + f(2) -> 2 +f(1) -> 1+f(0) -> f(0)  returns 0
// TC: O(n)
// SC: O(n)
// I/P: Enter num:3
// O/P: 6

//Print Factorial of N numbers using Functional recursion
int fact(int num){
    if(num == 0) return 1;   
    return num  * fact(num-1);
}
// f(3) -> 3 * f(2) -> 2 * f(1) -> 1 * f(0) -> f(0)  returns 1
// TC: O(n)
// SC: O(n)
// I/P: Enter num:3
// O/P: 6

//Print Reverse an Array using Functional recursion
void arrayReverse(int arr[], int n, int i){
    if(i >= n/2) return;
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    cout << i;
    arrayReverse(arr, n, i+1);
}
// f(arr,5,0) 5,1 reversed -> f(arr,5,1) 2,4 reversed -> f(arr,5,2) -> return
// TC: O(n/2)
// SC: O(n/2)
// I/P: Before Reversed:5 4 3 2 1
// O/P: After Reversed:1 2 3 4 5

// Check Palindrome using Functional recursion
bool checkPalindrome(string &str,int i){
    if(i >= str.size()/2) return true;
    if(str[i] != str[str.size()-i-1]) return false;

    return checkPalindrome(str,i+1);
  
}
// f(str,5,0) M,M checked -> f(arr,5,1) A,A checked -> f(arr,5,2) -> return
// TC: O(n/2)
// SC: O(n/2)
// I/P: MADAM
// O/P: MADAM is Palindrome: 1


// Fibonacci Series using Recursion
int fibonacci(int num){
    if(num <= 1) return num;
    return fibonacci(num-1)+fibonacci(num-2);
}
// f(4) -> f(3) + f(2)
// f(3) -> f(2) + f(1)
// f(2) -> f(1) + f(0)
// f(1) -> 0 f(0) -> 0
// TC: O(~2^n)
// I/P: Enter num:4
// O/P: 3
int main(){
    int num;
    cout << "Enter num:";
    cin >> num;
    // printHello(1,num);    
    // printNum(1,num);
    // printNumRev(1,num);
    // PsumofN(num,0);
    // cout << FsumofN(num);
    // cout << fact(num);

    // int arr[] = {5,4,3,2,1};
    // cout << "Before Reversed:";
    // for(auto i: arr) cout << i << " ";
    // arrayReverse(arr,5,0);
    // cout << "After Reversed:";
    // for(auto i: arr) cout << i << " ";


    // string str = "MADAM";
    // cout << str << " is Palindrome: "<< checkPalindrome(str,0);

    cout << fibonacci(num);

    cout << endl;
    return 0;
}