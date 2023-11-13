#include<iostream>
using namespace std;
int add(int a, int b){
    return a + b;
}
int multiplication(int c,int d){
    return c*d;
}
int main(int argc, char* argv[]){
int sum = add(20, 100);
cout << sum << endl;
int product = multiplication(45,80);
cout <<product << endl;
}