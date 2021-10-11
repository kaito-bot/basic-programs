#include<iostream>
using namespace std;

int main()
{
    int N,i,j;
    cin >> N;
    
    for(i=1; i<=N; i++)
    {
        int count=0;
        
        while(count<N-i)
        {
            cout << " ";
            count++;
        }
        for(j=1; j<=i*2-1; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
}