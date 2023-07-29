#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
	cin >> a;
    cin >> b;
    char letra_a = a[0];
    char letra_b = b[0];
    
    cout << a.size() << " " << b.size() << endl;
    cout << a+b << endl;
    a[0]= letra_b;
    b[0]= letra_a;
    cout << a << " " << b << endl;
  
    return 0;
}
