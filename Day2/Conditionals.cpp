#include<iostream>
using namespace std;
int main()
{
    int num;
    int sum;
    cout << "Enter a Number to print sum of Even Numbers : " << endl;
    cin >> num;

    if(num%2 == 0)
    {
        cout << "Even Number " << endl;
    }
    else{
        cout << " odd Number " << endl;
    }

    return 0;
 

    
}