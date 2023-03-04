#include <iostream>
#include <vector>

using namespace std;


void swap(vector<int>& vec, int i, int j) {
    int temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
}

void printVector(const vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}


void johnsonTrotter(vector<int>& vec, vector<int>& dir, int n) {
    if (n == 1) {
        printVector(vec);
        return;
    }

    
    for (int i = 0; i < n - 1; i++) {
        johnsonTrotter(vec, dir, n - 1);
        swap(vec, (dir[n-1] == -1) ? 0 : i, n-1);

        for (int j = n-2; j >= 0; j--) {
            if (vec[j] > vec[n-1]) {
                dir[j] *= -1;
            }
        }
    }

    
    johnsonTrotter(vec, dir, n - 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        vec[i] = i + 1;
    }
    vector<int> dir(n, -1);
    johnsonTrotter(vec, dir, n);
    return 0;
}
