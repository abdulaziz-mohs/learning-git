#include <iostream>
using namespace std;

int main() {
    int count = 0; // Variable to keep track of the total number of iterations

    // Outer loop (10 iterations)
    for (int i = 1; i <= 10; ++i) {
        // Inner loop (10 iterations for each outer iteration)
        for (int j = 1; j <= 10; ++j) {
            count++; // Increment the count for each iteration
            cout << "Iteration " << count << ": Outer loop (i = " << i << "), Inner loop (j = " << j << ")" << endl;
        }
    }
    cout << "Total iterations: " << count << endl; 
    for (int i=0;i<10;i++){
        cout<<"hello world how the world is going?"<<endl;
        cout<<"what is your name"<<endl;

    }
    return 0;
}
