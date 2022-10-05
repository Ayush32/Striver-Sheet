// factorial program


#include <iostream>

using namespace std;
int cnt = 0;

int factorial(int n){
    if(n <= 0)
        return 1;
    return n*factorial(n-1);
}

int main()
{
    // cout<<"Hello World";
    // int i = 1;
    int n = 5;
    cout << factorial(n);

    return 0;
}
