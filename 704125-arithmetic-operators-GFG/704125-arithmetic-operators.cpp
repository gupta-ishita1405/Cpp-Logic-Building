#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int x, y,p,q,r,t,u;
    float s;
    cin >> x >> y;

    // code here
    p=x  + y;
    q=x - y;
    r=x*y;
    s=(float)x/y;
    t=(int)s;
    u=x%y;

    cout << p << " " << q << " " << r << " " << fixed << setprecision(3) << s << " "
         << t << " " << u;

    return 0;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna