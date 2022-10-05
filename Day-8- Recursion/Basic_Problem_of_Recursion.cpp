// 1-  print name N times

#include <iostream>

using namespace std;
void name(int i,int n)
{
    if(i > n)
        return;
    cout << "Ayush" << " ";
    i++;
    name(i,n);
}

int main()
{
    // cout<<"Hello World";
    int i = 0;
    int n = 5;
    name(i,n);

    return 0;
}

Q- 2 - // print number from to 1 to N
  
#include <iostream>
using namespace std;
int cnt = 0;
void name(int i,int n)
{
    if(i > n)
        return;
    cout << i  << " ";
    i++;
    name(i,n);
}

int main()
{
    // cout<<"Hello World";
    int i = 1;
    int n = 5;
    name(i,n);

    return 0;
}

Q-3 // print from N to 1
  #include <iostream>

using namespace std;
int cnt = 0;
void name(int i,int n)
{
    if(i < 1)
        return;
    cout << i  << " ";
    // i++;
    name(i-1,n);
}

int main()
{
    // cout<<"Hello World";
    // int i = 1;
    int n = 5;
    name(n,n);

    return 0;
}
