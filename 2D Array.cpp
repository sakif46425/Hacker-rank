#include <algorithm>
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int hourglass(vector< vector <int> >& arr) {
    int n = arr.size(), o = arr[0].size();
    int max = numeric_limits<int>::min();
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < o - 2; j++) {
            int sum = 0;
            for (int x = j; x <= j + 2; x++) {
                sum += (arr[i][x] + arr[i+2][x]);
            }
            sum += arr[i+1][j+1];
            if (sum > max) max = sum;
        }
    }

    return max;
}
int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }

    cout << hourglass(arr) << endl;
    return 0;
}

