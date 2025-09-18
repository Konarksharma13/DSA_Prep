# 🧮 Number Theory Utilities in C++

This repository contains multiple utility functions in C++ for solving **basic number theory problems**.  
These are commonly asked in **coding interviews** and useful for practicing problem-solving skills.

---

## 📑 Table of Contents
- [Count Digits](#1️⃣-count-digits)
- [Reverse a Number](#2️⃣-reverse-a-number)
- [Check Palindrome Number](#3️⃣-check-palindrome-number)
- [Check Armstrong Number](#4️⃣-check-armstrong-number)
- [Print All Divisors](#5️⃣-print-all-divisors)
- [Check Prime Number](#6️⃣-check-prime-number)
- [GCD (Greatest Common Divisor)](#7️⃣-gcd-greatest-common-divisor)
- [How to Run](#-how-to-run)
- [Summary](#-summary)

---

## 1️⃣ Count Digits

### Method 1: Iterative Division
```cpp
int countDigits1(int num){
    int count = 0;
    while(num > 0){
        num /= 10;
        count++;
    }
    return count;
}
```
- **Time Complexity:** O(n) where n is the number of digits  
- **Example:**  
  Input: `56789` → Output: `5`  

### Method 2: Using Logarithm
```cpp
int countDigits2(int num){
    int count = (int) log10(num) + 1;
    return count;
}
```
- **Time Complexity:** O(log n)  
- **Example:**  
  Input: `56789` → Output: `5`  

---

## 2️⃣ Reverse a Number
```cpp
int reverseNumber(int num){
    int revNum = 0;
    while(num > 0){
        int rem = num % 10;
        revNum = (revNum * 10) + rem;
        num /= 10;
    }
    return revNum;
}
```
- **Time Complexity:** O(n)  
- **Example:**  
  Input: `123456` → Output: `654321`  

---

## 3️⃣ Check Palindrome Number
```cpp
string checkPalindrome(int num){
    int revNum= 0, tempNum = num;
    while(num > 0){
        int rem = num % 10;
        revNum = (revNum*10) + rem;
        num /= 10;
    }
    return tempNum == revNum ? "Palindrome" : "Not Palindrome";
}
```
- **Time Complexity:** O(n)  
- **Examples:**  
  - Input: `121` → Palindrome  
  - Input: `1234` → Not Palindrome  

---

## 4️⃣ Check Armstrong Number
(Armstrong = sum of cubes of digits equals the number itself)  
```cpp
string checkArmstrong(int num){
    int armNum= 0, tempNum = num;
    while(num > 0){
        int rem = num % 10;
        armNum += (rem*rem*rem);
        num /= 10;
    }
    return tempNum == armNum ? "an Armstrong number" : "not an Armstrong number";
}
```
- **Time Complexity:** O(n)  
- **Examples:**  
  - Input: `153` → Armstrong number  
  - Input: `433` → Not Armstrong number  

---

## 5️⃣ Print All Divisors

### Method 1: Brute Force
```cpp
void printAllDivisors1(int num){
    for(int i = 1; i <= num; i++){
        if(num % i == 0) 
            cout << i << " ";
    }
}
```
- **Time Complexity:** O(n)  

### Method 2: Optimized using √n
```cpp
void printAllDivisors2(int num){
    for(int i = 1; i <= sqrt(num); i++){
        if(num % i == 0){
            cout << i << " ";
            if((num/i) != i) 
                cout << num/i << " ";
        }
    }
}
```
- **Time Complexity:** O(√n)  
- **Example:**  
  Input: `36` → Output: `1 36 2 18 3 12 4 9 6`  

---

## 6️⃣ Check Prime Number

### Method 1: Brute Force
```cpp
string checkPrime1(int num){
    int count = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0) 
            count++;
    }
    return count == 2 ? "Prime number" : "not a Prime number";
}
```
- **Time Complexity:** O(n)  

### Method 2: Optimized using √n
```cpp
string checkPrime2(int num){
    int count = 0;
    for(int i = 1; i*i <= num; i++){
        if(num % i == 0){
            count++;
            if(num/i != i)
                count++;
        }
    }
    return count == 2 ? "Prime number" : "not a Prime number";
}
```
- **Time Complexity:** O(√n)  
- **Examples:**  
  - Input: `11` → Prime number  
  - Input: `36` → Not prime  

---

## 7️⃣ GCD (Greatest Common Divisor)

### Method 1: Brute Force
```cpp
int GCD1(int num1, int num2){
    int min = num1 > num2 ? num2 : num1;
    for(int i = min; i >= 1; i--){
        if(num1 % i == 0 && num2 % i == 0){
            return i;
        }
    }
}
```
- **Time Complexity:** O(min(n1, n2))  

### Method 2: Euclidean Algorithm
```cpp
int GCD2(int num1, int num2){
    while(num1 > 0 && num2 > 0){
        if(num1 > num2) num1 = num1 % num2;
        else num2 = num2 % num1;
    }
    return (num1 == 0) ? num2 : num1;
}
```
- **Time Complexity:** O(log(min(n1, n2)))  
- **Example:**  
  Input: `270 670` → Output: `10`  

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
- Counting digits: O(log n) optimal  
- Reversing numbers & palindrome check: O(n digits)  
- Armstrong check: O(n digits)  
- Divisors: O(√n) optimal  
- Prime check: O(√n) optimal  
- GCD: Euclidean algorithm is best (O(log n))  

---
