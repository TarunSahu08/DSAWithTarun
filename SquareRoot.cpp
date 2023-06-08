#include <iostream>
#include <vector>
using namespace std;

long long int squareRootInInteger(int num) {

    int start = 1, end = num/2;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;

    while(start <= end) {

        long long int square = mid * mid;

        if(square == num) {
            return mid;
        } else if(square < num) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

double morePrecision(int n, int precision, int tempSol) {

    double ans = tempSol;
    double factor = 1;
    
    for(int i=1; i<=precision; i++) {
        
        factor = factor / 10;
        
        for(double j=ans; j*j<n; j=j+factor) {
            ans = j;
        }
    }

    return ans;
}


int main() {

    int num;
    cout<< "Enter a number: ";
    cin>> num;

    int tempSol = squareRootInInteger(num);
    cout<< "Square root is: " <<morePrecision(num, 3, tempSol);
}