#include <iostream>
#include <bitset>
using namespace std;
 
// int main()
// {
//     int n = 5;

//     cout << n << " in binary is " << bitset<32>(n) << endl;
 
//     if (n & 1) {
//         cout << n << " is odd";
//     }
//     else {
//         cout << n << " is even";
//     }
 
//     return 0;
// }
 
// int main()
// {
//     int x = 4;
//     int y = -8;
 
//     cout << x << " in binary is " << bitset<32>(x) << endl;
//     cout << y << " in binary is " << bitset<32>(y) << endl;
 
//     // true if `x` and `y` have opposite signs
//     bool isOpposite = ((x ^ y) < 0);
 
//     if (isOpposite) {
//         cout << x << " and " << y << " have opposite signs" << endl;
//     }
//     else {
//         cout << x << " and " << y << " don't have opposite signs" << endl;
//     }
 
//     return 0;
// }

// int main() {
//     int x = 4;
//     int y = -8;
//     cout << x << "  in binary is " << bitset<sizeof(int)*CHAR_BIT>(x) << endl;
//     cout << y << " in binary is " << bitset<sizeof(int)*CHAR_BIT>(y) << endl;
//     cout << (x ^ y) << " in binary is " << bitset<sizeof(int)*CHAR_BIT>(x ^ y) << endl;
//     bool isOpposite = ((x ^ y) < 0);
//     if (isOpposite) cout << x << " and " << y << " have opposite signs" << endl;
//     else cout << x << " and " << y << " don't have opposite signs" << endl;
//     return 0;
// }

 
// int main()
// {
//     int x = 4;
//     cout << x << " + " << 1 << " is " << -~x << endl;
 
//     x = -5;
//     cout << x << " + " << 1 << " is " << -~x << endl;
 
//     x = 0;
//     cout << x << " + " << 1 << " is " << -~x << endl;
 
//     return 0;
// }

// int main() {
//     int x = 4;
//     cout << x << "  in binary is " << bitset<sizeof(int)*CHAR_BIT>(x) << endl;
//     cout << ~x << " in binary is " << bitset<sizeof(int)*CHAR_BIT>(~x) << endl;
//     cout << x << " + " << 1 << " is " << -~x << endl;

//     int y = -5;
//     cout << y << " in binary is " << bitset<sizeof(int)*CHAR_BIT>(y) << endl;
//     cout << ~y << "  in binary is " << bitset<sizeof(int)*CHAR_BIT>(~y) << endl;
//     cout << y << " + " << 1 << " is " << -~y << endl;
// }

// void swap(int &x, int &y)
// {
//     if (x != y)
//     {
//         x = x ^ y;
//         y = x ^ y;
//         x = x ^ y;
//     }
// }

// void swap(int &x, int &y) {
//     if (x != y) {
//         x ^= y;
//         y ^= x;
//         x ^= y;
//     }
// }
 
// int main()
// {
//     int x = 3, y = 4;
 
//     cout << "Before swap: x = " << x << " and y = " << y << endl;
//     swap(x, y);
//     cout << "After swap: x = " << x << " and y = " << y << endl;
 
//     return 0;
// }

// int turnOffKthBit(int n, int k) {
//     return n & ~(1 << (k - 1));
// }
 
// int main()
// {
//     int n = 20;
//     int k = 5;
 
//     cout << n << " in binary is " << bitset<8>(n) << endl;
//     cout << "Turning k'th bit off" << endl;
//     n = turnOffKthBit(n, k);
//     cout << n << " in binary is " << bitset<8>(n) << endl;
 
//     return 0;
// }

// int turnOnKthBit(int n, int k) {
//     return n | (1 << (k - 1));
// }
 
// int main()
// {
//     int n = 20;
//     int k = 6;
 
//     cout << n << " in binary is " << bitset<8>(n) << endl;
//     cout << "Turning k'th bit on\n";
//     n = turnOnKthBit(n, k);
//     cout << n << " in binary is " << bitset<8>(n) << endl;
 
//     return 0;
// }

// bool isKthBitSet(int n, int k) {
//     return n & (1 << (k - 1));
// }
 
// int main()
// {
//     int n = 20;
//     int k = 3;
 
//     cout << n << " in binary is " << bitset<8>(n) << endl;
 
//     if (isKthBitSet(n, k)) {
//         cout << "k'th bit is set";
//     }
//     else {
//         cout << "k'th bit is not set";
//     }
//     return 0;
// }

// int toggleKthBit(int n, int k) {
//     return n ^ (1 << (k - 1));
// }
 
// int main()
// {
//     int n = 20;
//     int k = 1;
 
//     cout << n << " in binary is " << bitset<8>(n) << endl;
//     cout << "Toggling k'th bit of n\n";
//     n = toggleKthBit(n, k);
 
//     cout << n << " in binary is " << bitset<8>(n) << endl;
 
//     return 0;
// }

// int positionOfRightmostSetBit(int n)
// {
//     if (n & 1) {
//         return 1;
//     }
//      n = n ^ (n & (n - 1));
//     int pos = 0;
//     while (n)
//     {
//         n = n >> 1;
//         pos++;
//     }
//     return pos;
// }

int positionOf


 
int main()
{
    int n = 20;
 
    cout << n << " in binary is " << bitset<8>(n) << endl;
    cout << "The position of the rightmost set bit is "
         << positionOfRightmostSetBit(n);
 
    return 0;
}
