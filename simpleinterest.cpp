#include <iostream>
using namespace std;
 // find the simple interest of 
 // x rupees over y years at z interest
 int main()
 {
    //we take input
    int x,y,z;
    cin >> x >> y >> z;
    // do the processing
    int ans = (x*y*z)/100;
    // display output
    cout << ans;
    return 0;
 }
