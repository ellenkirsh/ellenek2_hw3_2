//
//  main.cpp
//  ellenek2_hw3_2
//
//  Created by Ellen Kirsh on 9/22/21.
//

#include <iostream>
using namespace std;

void squareNreverse(int a[], int size){
    for (int start = 0, end = size-1; start<end; start++, end--){
        swap(a[start], a[end]);
    }
    for(int i = 0; i < (size); i++){
        a[i] = a[i] * a[i];
    }
}
int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the integer array: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    squareNreverse(a,n);
    cout << "Reverse Squared Array: \n";
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
    return 0;
}
