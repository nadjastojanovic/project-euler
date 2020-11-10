#include <iostream>

using namespace std;

/*

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

*/

int main(){

    int sum3 = 3 * 0.5 * 333 * 334;
    int sum5 = 5 * 0.5 * 199 * 200;
    int sum15 = 15 * 0.5 * 66 * 67;

    int res = sum3 + sum5 - sum15;
    
    cout << res << endl;
}