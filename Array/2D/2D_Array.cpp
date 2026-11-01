#include <iostream>
using namespace std;

int main() {
    int arr[4][5];

    
    cout << "Enter 20 elements:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }

   
   for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
        arr[i][j] = arr[i][j] + 1;   // or arr[i][j]++;
    }
}

cout << "\n2D Array Elements:\n";
for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
return 0;
}
