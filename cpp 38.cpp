#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size(), cols = matrix[0].size();
    int row = 0, col = cols - 1;
    while (row < rows && col >= 0) {
        if (matrix[row][col] == target) {
            return true;
        } else if (matrix[row][col] > target) {
            col--;
        } else {
            row++;
        }
    }
    return false;
}
int main() {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };
    int target = 5;
    if (searchMatrix(matrix, target)) {
        cout << "Element found." << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
}
