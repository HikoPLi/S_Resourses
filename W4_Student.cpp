/******************************************************************************
AST21105 - Lab 4 - Reference

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

//Task W4_Q1, code below


// Task W4_Q2, code below


//Task W4_Q3, code below


//Task W4_Q4 - You may change the signature and body of this function but not the way of calling W4_Q4 in main()
int& W4_Q4(int a){
    int temp = a + 3 * 8;
    return temp;
}


int main()
{
    //DON'T CHANGE THE MAIN METHOD
    cout << "\n==============Start of W4_Q1====================\n"<<endl;
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << " and y = " << y << endl;  // x = 5, y = 10
    W4_Q1(x, y);
    cout << "After swapping: x = " << x << " and y = " << y << endl; //x = 10, y = 5
    cout << "\n==============Start of W4_Q1===================="<<endl;
    
    cout << "\n==============Start of W4_Q2====================\n"<<endl;
    int p = 1, q = 7;
    
    cout << "Total of p and q " << W4_Q2(p, q) << endl;
    cout << "Values of p and q after summing: p = " << p << " and q = " << q << endl; //p = 2, q = 6
    cout << "\n==============Start of W4_Q2===================="<<endl;
    
    cout << "\n==============Start of W4_Q3===================="<<endl;
    string msg1 = "Hello\tHow_are_you\tNice_to_meet_you_all";
    int numEncrypted = W4_Q3_Cypher(msg1);
    cout << "Encrpyted message: " << msg1 << " (# of character changed: " << numEncrypted << ")" << endl;
    int numDecrypted = W4_Q3_Decypher(msg1);
    cout << "Decrpyted message: " << msg1 << " (# of character changed: " << numDecrypted << ")" << endl;
    cout << "\n==============End of W4_Q3====================\n"<<endl;
    
    cout << "\n==============Start of W4_Q4===================="<<endl;
    int s = 5;
    cout << "Value produced by W4_Q4(...): " << W4_Q4(s) << endl;
    cout << "\n==============Start of W4_Q4===================="<<endl;
    return 0;
}
