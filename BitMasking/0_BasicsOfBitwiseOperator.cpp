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
    //note (~a) = -(n+1)  *imprtant properties

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
    // if( ((a>>n)&1) == 1) nahi
    // else yes;
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