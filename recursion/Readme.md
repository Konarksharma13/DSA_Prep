# 🔄 Recursion in C++

This repository contains multiple examples of **recursion in C++** with explanations, time complexity (TC), and space complexity (SC).  
These problems are fundamental in understanding recursive problem-solving and are often asked in coding interviews.

---

## 📑 Table of Contents
- [Print "Hello" N Times](#1️⃣-print-hello-n-times)
- [Print Numbers 1 → N](#2️⃣-print-numbers-1--n)
- [Print Numbers N → 1](#3️⃣-print-numbers-n--1)
- [Sum of N Numbers (Parameterized)](#4️⃣-sum-of-n-numbers-parameterized)
- [Sum of N Numbers (Functional)](#5️⃣-sum-of-n-numbers-functional)
- [Factorial of N](#6️⃣-factorial-of-n)
- [Reverse an Array](#7️⃣-reverse-an-array)
- [Palindrome Check](#8️⃣-palindrome-check)
- [Fibonacci Series](#9️⃣-fibonacci-series)
- [How to Run](#-how-to-run)
- [Summary](#-summary)

---

## 1️⃣ Print "Hello" N Times
```cpp
void printHello(int i,int num){
    if(i > num) return;
    cout << "Hello" << ' ';
    printHello(i+1, num);
}
```
- **TC:** O(n)  
- **SC:** O(n)  
- **Example:**  
  Input: `3` → Output: `Hello Hello Hello`

---

## 2️⃣ Print Numbers 1 → N
```cpp
void printNum(int i,int num){
    if(i > num) return;
    cout << i << ' ';
    printNum(i+1, num);
}
```
- **TC:** O(n)  
- **SC:** O(n)  
- **Example:**  
  Input: `3` → Output: `1 2 3`

---

## 3️⃣ Print Numbers N → 1
```cpp
void printNumRev(int i,int num){
    if(i > num) return;
    printNumRev(i+1, num);
    cout << i << ' ';
}
```
- **TC:** O(n)  
- **SC:** O(n)  
- **Example:**  
  Input: `3` → Output: `3 2 1`

---

## 4️⃣ Sum of N Numbers (Parameterized)
```cpp
void PsumofN(int num,int sum){
    if(num < 1) {
        cout << sum;
        return;
    }
    PsumofN(num-1, sum+num);
}
```
- **TC:** O(n)  
- **SC:** O(n)  
- **Example:**  
  Input: `3` → Output: `6`

---

## 5️⃣ Sum of N Numbers (Functional)
```cpp
int FsumofN(int num){
    if(num == 0) return 0;   
    return num + FsumofN(num-1);
}
```
- **TC:** O(n)  
- **SC:** O(n)  
- **Example:**  
  Input: `3` → Output: `6`

---

## 6️⃣ Factorial of N
```cpp
int fact(int num){
    if(num == 0) return 1;   
    return num  * fact(num-1);
}
```
- **TC:** O(n)  
- **SC:** O(n)  
- **Example:**  
  Input: `3` → Output: `6`

---

## 7️⃣ Reverse an Array
```cpp
void arrayReverse(int arr[], int n, int i){
    if(i >= n/2) return;
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    arrayReverse(arr, n, i+1);
}
```
- **TC:** O(n)  
- **SC:** O(n)  
- **Example:**  
  Input: `{5,4,3,2,1}` → Output: `{1,2,3,4,5}`

---

## 8️⃣ Palindrome Check
```cpp
bool checkPalindrome(string &str,int i){
    if(i >= str.size()/2) return true;
    if(str[i] != str[str.size()-i-1]) return false;
    return checkPalindrome(str,i+1);
}
```
- **TC:** O(n)  
- **SC:** O(n)  
- **Example:**  
  Input: `"MADAM"` → Output: `Palindrome`

---

## 9️⃣ Fibonacci Series
```cpp
int fibonacci(int num){
    if(num <= 1) return num;
    return fibonacci(num-1)+fibonacci(num-2);
}
```
- **TC:** O(2^n)  
- **SC:** O(n)  
- **Example:**  
  Input: `4` → Output: `3`

---

## How to Run
1. Save the code in `main.cpp`.  
2. Compile using:
   ```bash
   g++ main.cpp -o main
   ```
3. Run:
   ```bash
   ./main
   ```

---

## Summary
- Print/looping with recursion: O(n) time and space.  
- Summation and factorial: O(n).  
- Array reversal and palindrome check: O(n).  
- Fibonacci (naive recursion): O(2^n), very slow.  
- Always define a base case to prevent infinite recursion.  

---
