#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number for pattern (n): " << endl;
    cin >> n;

    int size = 2 * n + 1;
    vector<vector<int>> mat(size, vector<int>(size));
    
    // Store original n for the outermost value
    int current_val = n;
    
    int top = 0, bottom = size - 1, left = 0, right = size - 1;

    // Loop to fill the matrix in a spiral fashion
    while (top <= bottom && left <= right) {

        // Fill the top row
        for (int j = left; j <= right; j++) mat[top][j] = current_val;
        top++;

        // Fill the right column
        for (int i = top; i <= bottom; i++) mat[i][right] = current_val;
        right--;

        // Fill the bottom row
        if (top <= bottom) {
            for (int j = right; j >= left; j--) mat[bottom][j] = current_val;
            bottom--;
        }

        // Fill the left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--) mat[i][left] = current_val;
            left++;
        }

        // Move to the next inner layer
        current_val--;
    }

    // Print the complete matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Using a conditional to handle single-digit alignment
            if (mat[i][j] < 10) cout << mat[i][j] << "  ";
            else cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}