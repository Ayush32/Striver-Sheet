/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int cnt = 0;
void print()
{
  // base condition
    if(cnt == 4)
        return;
    cout << cnt << " ";
    cnt++;
//   recursion call
    print();
}

int main()
{
    // cout<<"Hello World";
    print();

    return 0;
}
