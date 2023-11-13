#include<iostream>
using namespace std;

// global variable
//accessed by all functions
int g = 10;
int sum(int a, int b);
int main(int argc , char *argv[])
{
 
    int c = sum(10,40);
    cout << "sum is " << c << endl;
    return 0;
}
int sum(int a, int b)
{
    return a + b + g;
} 

