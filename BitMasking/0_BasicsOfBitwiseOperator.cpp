#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 4; 
    int b = 5;

    cout << (a|b) << endl;
    // cout << a|b << endl; , note -> dont write like this because
    //priority of << is greater than  |  ,so complier understand it like this
    //-> (cout << a) | b
    cout << (a&b) << endl;
    cout << (a^b) << endl;//when odd no. of 1 ho then we get 1 , else we get 0;
    cout << (~b) << endl;// this is like not , 
    //note (~n) = -(n+1)  *imprtant properties

    cout << ( (a | b) + (a & b) ) << " = " << (a + b) << endl; //important properties;

    //if we XOR on same no. we get 0;
    cout << (5^5) << endl;
    //Question on this topic -> leetcode 268
    // class Solution {
    // public:
    //     int missingNumber(vector<int>& nums) {
    //         int ans = (0^nums[0]);
    //         for(int i = 1; i < nums.size(); i++){
    //             ans = (ans^(i^nums[i]));
    //         }
    //         return ans^nums.size();
    //     }
    // };
    cout << (a<<1) <<endl;//this means a*2;
    cout << (a<<2) <<endl;//this means a*2*2;
    cout << (a>>1) <<endl;//similaraly a/(2);
    cout << (a>>2) <<endl;// a/(2*2);

    //Tips ans triks of all of above;
    // 1 -> a+b = ((a|b) + (a&b));
    // 2 -> a^0 = a , a^a = 0;

    // set / flip / clear bit
    // set bit - nth position  of no. a -> a | (1<<n)
    // clear bit at nth position of no. a -> a & (~(1<<n)) 
    // flip bit at nth position of no. a -> a^(1<<n);

    // if last bit is 0 -> then its even no. else odd no.
    // if( a&1 == 0) even
    //else odd hai;
    if((a&1)== 0) cout<<"Even"<<endl;
    if((b&1)== 0) cout<<"Even"<<endl;
    if((a&1)== 1) cout<<"Odd"<<endl;
    if((b&1)== 1) cout<<"Odd"<<endl;

    // set means -> its 1;
    //to check if nth bit is set or not
    // if( ((a>>n)&1) == 1) yes
    // else no;
    // it funtion is looks like this
    // bool is_set(int number , int n){
    //     return (number>>n)&1;
    //  }

    //is a no. is power of 2 or not?
    if( (a & (a-1)) == 0) cout<<"Its power of 2\n";

    //if want to unset right most bit (RMB)
    // a = (a&(a-1))

    //Brian Kernighan's Algorithm
    // to count no. of set bit in a given no.
    // int countSetBit(int number){
    //     int count = 0;
    //     while(number){
    //         number = (number&(number-1))
    //         count++;
    //     }
    //     return count;
    // }
}




/*
========================================
 C++ OPERATOR PRECEDENCE (HIGH → LOW)
========================================

1️⃣ Highest Priority
----------------------------------------
()        // Parentheses (grouping)
[]        // Array subscript
->        // Member access via pointer
.         // Member access

----------------------------------------

2️⃣ Unary Operators
----------------------------------------
++  --    // Increment / Decrement
!         // Logical NOT
~         // Bitwise NOT
+  -      // Unary plus / minus
*         // Dereference
&         // Address-of
sizeof    // Size operator

----------------------------------------

3️⃣ Multiplicative Operators
----------------------------------------
*   /   % // Multiply, Divide, Modulus

----------------------------------------

4️⃣ Additive Operators
----------------------------------------
+   -     // Addition, Subtraction

----------------------------------------

5️⃣ Shift Operators
----------------------------------------
<<   >>   // Left shift, Right shift

⚠️ Example:
cout << (a << 1);   // correct
cout << a << 1;     // wrong meaning

----------------------------------------

6️⃣ Relational Operators
----------------------------------------
<   <=   >   >=

----------------------------------------

7️⃣ Equality Operators
----------------------------------------
==   !=

----------------------------------------

8️⃣ Bitwise AND
----------------------------------------
&

----------------------------------------

9️⃣ Bitwise XOR
----------------------------------------
^

----------------------------------------

🔟 Bitwise OR
----------------------------------------
|

----------------------------------------

1️⃣1️⃣ Logical AND
----------------------------------------
&&

----------------------------------------

1️⃣2️⃣ Logical OR
----------------------------------------
||

----------------------------------------

1️⃣3️⃣ Conditional Operator
----------------------------------------
? :

----------------------------------------

1️⃣4️⃣ Assignment Operators
----------------------------------------
=   +=   -=   *=   /=   %=
&=  |=   ^=   <<=   >>=

----------------------------------------

1️⃣5️⃣ Lowest Priority
----------------------------------------
,   // Comma operator

========================================
 IMPORTANT SHORTCUT (Bitwise only):
----------------------------------------
~  >  << >>  >  &  >  ^  >  |
========================================

GOLDEN RULE:
----------------------------------------
When in doubt → ALWAYS use parentheses ( )

Example:
cout << (a & b);   // ✅
cout << a & b;     // ❌
========================================
*/
Introduction to Bit Manipulation [Theory]



4

Introduction
This article serves as an introduction to some fundamental concepts in binary number manipulation, including binary number conversion, one's complement, and two's complement and many more concepts. These concepts are not only fundamental to understanding how computers work but also crucial for solving a variety of problems in computer science.

Having an understanding of binary numbers is extremely important in the field of computer science as everything stored in a computer is in the form of only 0s and 1s.

Binary Number Conversion
Decimal to Binary Conversion:
By repeatedly dividing a number by 2 and recording the result, decimal values can be transformed into binary.

Example: Converting 13 to its binary equivalent:

Start with the decimal number 13.
Divide the number by 2 and record the remainder.
Repeat the division with the quotient until the number becomes 0.
13 / 2 = 6 remainder 1
6 / 2 = 3 remainder 0
3 / 2 = 1 remainder 1
1 / 2 = 0 remainder 1
To obtain the binary equivalent of 13, read the remainders from bottom to top: 1101.

So, the binary equivalent of 13 is 1101.

Binary to Decimal Conversion:
Converting a binary number back to its decimal equivalent involves a reverse process.

Example: Converting 1101 to its decimal equivalent:

Start from the rightmost bit (least significant bit).
Each bit is multiplied by 2 raised to the power of its position index.
1 * 2^0 = 1
0 * 2^1 = 0
1 * 2^2 = 4
1 * 2^3 = 8
Sum = 1 + 0 + 4 + 8 = 13.

Hence, the decimal equivalent of the binary number 1101 is 13.

Understanding One's Complement and Two's Complement
One's Complement
The one's complement of a binary number is obtained by flipping all the bits.

Example: The one's complement of 13 (binary 1101):

Binary of 13     : 0000 1101
One's Complement : 1111 0010
Two's Complement
The two's complement is obtained by taking the one's complement of a number and adding 1.

Example: The two's complement of 13 (binary 1101):

One's Complement : 1111 0010
Add 1            : 1111 0011
Bitwise Operators
AND Operator (&)
If both corresponding bits are 1, the resulting bit is 1; otherwise, it is 0.

13: 1101
 7: 0111
&  : 0101 → 5
OR Operator (|)
If either corresponding bit is 1, the resulting bit is 1.

13: 1101
 7: 0111
|  : 1111 → 15
XOR Operator (^)
If bits differ, the result is 1; if the same, result is 0.

13: 1101
 7: 0111
^  : 1010 → 10
NOT Operator (~)
Flips all bits of the number.

 5: 0000 0101
~5: 1111 1010 → -6 (in two's complement)
Shift Operators
Right Shift (>>): Shifts bits to the right, fills left with 0s.

13 >> 1 = 0110 → 6
Left Shift (<<): Shifts bits to the left, fills right with 0s.

13 << 1 = 11010 → 26
Bit Manipulation Tricks and Techniques
1. Swapping Two Numbers Without a Third Variable
A = A ^ B
B = A ^ B
A = A ^ B
2. Checking if the i-th Bit is Set
(1 << i) & num   → set if result ≠ 0
(num >> i) & 1   → set if result ≠ 0
3. Setting the i-th Bit
num | (1 << i)
4. Clearing the i-th Bit
num & ~(1 << i)
5. Toggling the i-th Bit
num ^ (1 << i)