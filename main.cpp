#include <iostream>
using namespace std;

int main() {
   int n=0;
    int a=1, b=1, c=0;
    cin>>n;
    cout<< a <<endl;
    cout<< b <<endl;
    int i=0;
    for (i =0;i < n;i++) {
        c = a + b;
        a = b;
        b = c;
           if (c< n) {
           cout<< c <<endl;
           }
   return 0;
}
