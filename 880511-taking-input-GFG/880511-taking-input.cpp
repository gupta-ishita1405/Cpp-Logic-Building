#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    float f;
    int ff; // To Store floor of float variable f

    // code here
    getline(cin, s);
    cin>>n;
    cin>>f;
    
    ff=(int)f;

    cout << s << endl;
    
    cout << n << endl;
    
    cout << ff << endl;
    
    return 0;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna