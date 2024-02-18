#include<iostream>
using namespace std;

int main() {
    int ar[10] = {1,2,3,4,5};
    int position, num, i;
    
    cout << "Enter the position and number: ";
    cin >> position >> num;
    
    for(i = 4; i >= position; i--) {
        ar[i + 1] = ar[i];
    }
     // Insert the new element at the specified position
    ar[position] = num;
    
    cout << "New array: ";
    for(i = 0; i < 6; i++) {
        cout << ar[i] << " ";
    }
    
    return 0;
}
