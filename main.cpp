#include <iostream>
#include <bitset>
#include <cstdint>

using namespace std;

int main(int argc, char *argv[])
{

    int x = 42, n;
    int c = 10;
    int d = 20;

    bitset<4> a{0b0101};
    bitset<4> b{0b1011};

    cout << "or\n";
    cout << "a: " << a << "\nb: " << b << "\n";
    cout << (a | b) << "\n";

    cout << "no\n";
    cout << "a: " << a << "\n";
    cout << "~a: " << (~a) << "\n";

    cout << "xor\n";
    cout << "a: " << a << "\nb: " << b << "\n";
    cout << (a ^ b) << "\n";

    cout << "and\n";
    cout << "a: " << a << "\nb: " << b << "\n";
    cout << (a & b) << "\n";

    cout << "shift left\n";
    cout << "a: " << a << "\n";
    cout << "<<a: " << (a << 3) << "\n";

    cout << "shift right\n";
    cout << "b: " << b << "\n";
    cout << ">>b: " << (b >> 3) << "\n";

    cout << "--------------------------\n" << "on/off \n";

    const unsigned char option = 0x01;
    const unsigned char option2 = 0x02;
    
    unsigned char myflags = 0;

    myflags |= option;  
    myflags &= ~option2;

    cout << static_cast<bool>(myflags & option) << '\n';
    cout << static_cast<bool>(myflags & option2) << '\n';

    cout << "--------------------------\n" << "swap \n";

    cout << "c: " << c << "\nd: " << d << "\n";

    c = c ^ d;
    d = c ^ d;
    c = c ^ d;

    cout << "c: " << c << "\nd: " << d << "\n";

    return 0;
}
