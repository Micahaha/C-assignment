
// pre-processor directives
#include <numeric>
#include "./headers/RationalNumber.h"

using namespace std;


int main(){

    int num = 0;
    int den = 0;
    RationalNumber r1();


    cout << "Rational Number 1 Fraction Form = ";
    r1.printRationalNumber();
    cout << "Rational Number 1 Quotient Form = ";
    r1.printRationalNumber(2);

    RationalNumber rational_num2(20,30);
    cout << "Rational Number 1 Fraction Form = ";
    rational_num2.printRationalNumber();
    cout << "Rational Number 1 Quotient Form = ";
    rational_num2.printRationalNumber(2);

    RationalNumber rational_num3(50,100);
    cout << "Rational Number 1 Fraction Form = ";
    rational_num3.printRationalNumber();
    cout << "Rational Number 1 Quotient Form = ";
    rational_num3.printRationalNumber(2);


    // create a RationalNumber object named r1 using 
    // its no-arg constructor

    RationalNumber r1();

    // output the contents of r1 in fraction form

    cout << "Rational Number 1 Fraction Form = ";
    r1.printRationalNumber();
    
    // output the contents of r1 in quotient form
    
    cout << "Rational Number 1 Quotient Form = ";
    r1.printRationalNumber();
    
    // set r1's numerator to 4

    r1.setNumerator(4);

    
    // set r1's denominator to 6

    r1.setDenominator(6);
    
    // output the contents of r1 in fraction form

    cout << "Rational Number 1 Fraction Form = ";
    r1.printRationalNumber();
    
    // output the contents of r1 in quotient form

    cout << "Rational Number 1 Quotient Form = ";
    r1.printRationalNumber();

    // create a RationalNumber object named r2 using 
    // its two-arg constructor passing a numerator of
    // 2 and a denominator of 4

    RationalNumber r2(2,4);

    // output the contents of r2 in fraction form

    r2.printRationalNumber()

    // output the contents of r2 in quotient form

    r2.printRationalNumber(2)
    
    // get r2's numerator and then display it to stdout

    int num1 = 0;
    int num2 = 0;

    r2.getNumerator(num1);
    r2.getDenominator(num2);
    
    cout << "Rational Number 2 Numerator = " << num1 << endl;

    // get r2's denomiator and then display it to stdout

    cout << "Rational Number 2 denominator " << num2 << endl;


    // call method on r1 that will test if it is equal to r2
    // and display its return to stdout as false or true

    cout << "Rational Number 1 equal Rational Number 2 ? " << r2.equalRationalNumber(r1) << endl;

    return 0;


}

