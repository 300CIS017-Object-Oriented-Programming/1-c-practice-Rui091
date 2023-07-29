#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Complete the code.
    vector<string> nums = {"zero","one","two","three","four","five", "six","seven","eight","nine"};
    int n;
    cin >> n;
    if(n>9)
        printf("Greater than 9") ;
    else
        cout << nums[n];
        

   
}

