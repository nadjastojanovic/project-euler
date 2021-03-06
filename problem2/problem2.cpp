#include <iostream>

using namespace std;

/*

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

*/

int sum = 2;

int add(int a, int b){
    int n = a + 4 * b;
    if (n > 4000000){
        return sum;
    }

    sum += n;
    add(b, n);
}

int main(){
    cout << add(0, 2) << endl;
}