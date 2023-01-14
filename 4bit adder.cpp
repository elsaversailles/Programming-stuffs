#include<iostream>
using namespace std;
int main()
{
    int and1, and2, nand2, nand3, xor1, xor2, xor_out;
    int pin_a1, pin_b1, pin_c1, pin_c, pin_a2, pin_b2, pin_c2, pin_a3, pin_b3, pin_c3, pin_a4, pin_b4, pin_c4;
    int bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, pin_es1, pin_es2, pin_res10, pin_res11;
    int pin_res20, pin_res22, pin_res30, pin_res33, pin_res40, pin_res44, resbit1, resbit2, resbit3, resbit4;
    cout << "Enter first 4bit number: ";
    cin >> bit1 >> bit2 >> bit3 >> bit4;
    cout << "Enter second 4bit number: ";
    cin >> bit5 >> bit6 >> bit7 >> bit8;
    cout << "Enter carry in: ";
    cin >> pin_es1;

//Adder 1
    pin_a1 = bit4;
    pin_b1 = bit8;
     xor1 = (pin_a1 | pin_b1); //AND gate
    if ((xor1 == 0)) 
    {
     nand2 = ((pin_a1 & pin_b1) == 1);
        if (nand2 == 1) {
        nand2 = 0; //OR gate
        } 
        else if (nand2 == 0) {
        nand2 = 1; //OR gate
        }
    }

    else if ((xor1 == 1)) 
    {
     nand3 = ((pin_a1 & pin_b1) == 1);
        if (nand3 == 1) {
        nand3 = 0; //OR gate
        } 
        else if (nand3 == 0) {
        nand3 = 1; //OR gate
        }
    }
    xor_out = (xor1 & nand3);

//xor2 of adder
    pin_c = pin_es1; //feed the output from es1 pin
 xor2 = (xor_out | pin_c); 
    if ((xor2 == 0)) 
    {
     nand3 = ((xor_out & pin_c) == 1);
        if (nand3 == 1) {
        nand3 = 0; //OR gate
        } 
        else if (nand3 == 0) {
        nand3 = 1; //OR gate
        }
    }

    else if ((xor2 == 1)) 
    {
     nand3 = ((xor_out & pin_c1) == 1);
        if (nand3 == 1) {
        nand3 = 0; //OR gate
        } 
        else if (nand3 == 0) {
        nand3 = 1; //OR gate
        }
    }
    pin_res10 = (xor2 & nand3);

//and of adder
    and1 = (pin_a1 & pin_b1);
//2nd and of adder
    and2 = (xor_out & pin_c1);
//OR gate
    pin_res11 = (and1 | and2);

/*
    cout << "A1 pin_res10: " << pin_res10 << endl;
    cout << "A1 pin_res11: " << pin_res11 << endl;
*/

//ADDER2

    pin_a2 = bit3;
    pin_b2 = bit7;
     xor1 = (pin_a2 | pin_b2); 
    if ((xor1 == 0)) 
    {
     nand2 = ((pin_a2 & pin_b2) == 1);
        if (nand2 == 1) {
        nand2 = 0; //OR gate
        } 
        else if (nand2 == 0) {
        nand2 = 1; //OR gate
        }
    }

    else if ((xor1 == 1)) 
    {
     nand3 = ((pin_a2 & pin_b2) == 1);
        if (nand3 == 1) {
        nand3 = 0; //OR gate
        } 
        else if (nand3 == 0) {
        nand3 = 1; //OR gate
        }
    }
    xor_out = (xor1 & nand3);

//xor2 of adder
    pin_c = pin_res11; //feed the output from previous adder
 xor2 = (xor_out | pin_c); 
    if ((xor2 == 0)) 
    {
     nand3 = ((xor_out & pin_c2) == 1);
        if (nand3 == 1) {
        nand3 = 0; //OR gate
        } 
        else if (nand3 == 0) {
        nand3 = 1; //OR gate
        }
    }

    else if ((xor2 == 1)) 
    {
     nand3 = ((xor_out & pin_c2) == 1);
        if (nand3 == 1) {
        nand3 = 0; //OR gate
        } 
        else if (nand3 == 0) {
        nand3 = 1; //OR gate
        }
    }
    pin_res20 = (xor2 & nand3);

//and of adder
    and1 = (pin_a2 & pin_b2);
//2nd and of adder
    and2 = (xor_out & pin_c2);
//OR gate
    pin_res22 = (and1 | and2);

/*
    cout << "A1 pin_res20: " << pin_res20 << endl;
    cout << "A1 pin_res22: " << pin_res22 << endl;
*/
//ADDER3
    pin_a3 = bit2;
    pin_b3 = bit6;
     xor1 = (pin_a3 | pin_b3); 
    if ((xor1 == 0)) 
    {
     nand2 = ((pin_a3 & pin_b3) == 1);
        if (nand2 == 1) {
        nand2 = 0; //OR gate
        } 
        else if (nand2 == 0) {
        nand2 = 1; //OR gate
        }
    }

    else if ((xor1 == 1)) 
    {
     nand3 = ((pin_a3 & pin_b3) == 1);
        if (nand3 == 1) {
        nand3 = 0; //OR gate
        } 
        else if (nand3 == 0) {
        nand3 = 1; //OR gate
        }
    }
    xor_out = (xor1 & nand3);

//xor2 of adder
    pin_c = pin_res22; //feed the output of the previous adder
 xor2 = (xor_out | pin_c); 
    if ((xor2 == 0)) 
    {
     nand3 = ((xor_out & pin_c3) == 1);
        if (nand3 == 1) {
        nand3 = 0; //OR gate
        } 
        else if (nand3 == 0) {
        nand3 = 1; //OR gate
        }
    }

    else if ((xor2 == 1)) 
    {
     nand3 = ((xor_out & pin_c3) == 1);
        if (nand3 == 1) {
        nand3 = 0; //OR gate
        } 
        else if (nand3 == 0) {
        nand3 = 1; //OR gate
        }
    }
    pin_res30 = (xor2 & nand3);

//and of adder
    and1 = (pin_a3 & pin_b3);
//2nd and of adder
    and2 = (xor_out & pin_c3);
//OR gate
    pin_res33 = (and1 | and2);

/*
    cout << "A1 pin_res30: " << pin_res30 << endl;
    cout << "A1 pin_res33: " << pin_res33 << endl;
*/
//ADDER4
    pin_a4 = bit1;
    pin_b4 = bit5;
     xor1 = (pin_a4 | pin_b4); 
    if ((xor1 == 0)) 
    {
     nand2 = ((pin_a4 & pin_b4) == 1);
        if (nand2 == 1) {
        nand2 = 0; //OR gate
        } 
        else if (nand2 == 0) {
        nand2 = 1; //OR gate
        }
    }

    else if ((xor1 == 1)) 
    {
     nand3 = ((pin_a4 & pin_b4) == 1);
        if (nand3 == 1) {
        nand3 = 0; //OR gate
        } 
        else if (nand3 == 0) {
        nand3 = 1; //OR gate
        }
    }
    xor_out = (xor1 & nand3);

//xor2 of adder
    pin_c = pin_res33; //feed the output of the previous adder
 xor2 = (xor_out | pin_c); 
    if ((xor2 == 0)) 
    {
     nand3 = ((xor_out & pin_c4) == 1);
        if (nand3 == 1) {
        nand3 = 0; //OR gate
        } 
        else if (nand3 == 0) {
        nand3 = 1; //OR gate
        }
    }

    else if ((xor2 == 1)) 
    {
     nand3 = ((xor_out & pin_c4) == 1);
        if (nand3 == 1) {
        nand3 = 0; //OR gate
        } 
        else if (nand3 == 0) {
        nand3 = 1; //OR gate
        }
    }
    pin_res40 = (xor2 & nand3);

//and of adder
    and1 = (pin_a4 & pin_b4);
//2nd and of adder
    and2 = (xor_out & pin_c4);
//OR gate
//cout <<"and1: " << and1 << endl;
//cout <<"and2: " << and2 << endl;
    pin_res44 = (and1 | and2);

/*
    cout << "A1 pin_res40: " << pin_res40 << endl;
    cout << "A1 pin_res44: " << pin_res44 << endl;
*/


    //Result bit
    pin_es2 = pin_res44;
    resbit4 = pin_res10;
    resbit3 = pin_res20;
    resbit2 = pin_res30;
    resbit1 = pin_res40;

    cout << " Bit 1: " << resbit1 << endl;
    cout << " Bit 2: " << resbit2 << endl;
    cout << " Bit 3: " << resbit3 << endl;
    cout << " Bit 4: " << resbit4 << endl;
    cout << " Overflow: " << pin_es2 << endl;

    return 0;
}
