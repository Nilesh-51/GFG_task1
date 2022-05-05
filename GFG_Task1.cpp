/*
Task 1:-
Given the string "A string." Print on one line the letter on the index 0, 
the pointer position and the letter t. Update the pointer to pointer+2.
Then, in another line print the pointer and the letters r and g of the string (using the pointer)
*/
#include<iostream>
using namespace std;
int main(){
    string str="A string";
    int i=0;
    cout<<str[i]<<" "<<i<<" "<<"t"<<endl;
    i=i+2;
    cout<<i<<" "<<str[i+2]<<" "<<str[i+5];
    return 0;
}