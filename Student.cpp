#include<iostream>
using namespace std;

int main(int argc, char** argv){
   
    int Students;

    cout << "Enter the number of students"<<endl;
    cin>> Students ; 
    cout << "Enter Marks of the students"<<endl;
    int total = 0;
    for (int i = 0; i < Students; i++)
    {
         int marks[i];
        cin >> marks[i];
       total += marks[i] ;
       
    }
     double average = static_cast<double>(total) / Students; // Calculate average

    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
    

}