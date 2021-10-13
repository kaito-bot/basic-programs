                                    // WAP to print FIBONACCI SERIES
#include<iostream>

using namespace std;

int main()
{
    int num, num1, num2, num3=0;

    cout << "Enter the nuber : " << endl;
    cin  >> num;

    num1 = 0;
    num2 = 1;

    cout << num1 << " " << num2 << " "; 
    for(int i=2; i<num; i++)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;

        cout << num3 << " ";
    }
}