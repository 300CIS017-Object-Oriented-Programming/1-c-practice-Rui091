#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=n-1;i>=0;--i){
        int num;
        cin >> num ;
        arr[i] = num;
    }
    for(int i=0;i<n;++i){
        cout << arr[i] << " ";
    }
    return 0;
}