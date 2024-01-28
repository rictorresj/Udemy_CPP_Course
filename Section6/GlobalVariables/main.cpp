//Section 6
//Global and local Variables
 
#include <iostream>

using namespace std;

// Global variable
   int age {20};

int main() {
// local variable, overshadows global variable
   int age {18};
   cout << age << endl;
    return 0;
}