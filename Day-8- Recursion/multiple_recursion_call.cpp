#include <iostream>

using namespace std;

// fibonnaci number - 0,1,1,2,3,5,8,13,21,34

int fibo(int n) {
    // base case
    if(n <= 1)
        return n;
    int last = fibo(n-1);
    int secondLast = fibo(n-2);
    
    return last+ secondLast;
    
}

int main()
{
    int n;
    cin >> n;
    cout << (fibo(n));

    return 0;
}
