#include <iostream>
using namespace std;

int main()
{
    //1
    int profit[6] = {}, sum = 0;
    for (int i = 0; i < 6; i++) {
        cout << "Enter profit for " << i + 1 << " month: ";
        cin >> profit[i];
    }
    for (int j = 0; j < 6; j++) {
        sum += profit[j];
    }
    cout << "Sum = " << sum << "\n\n";
    

    //2
    int nums[] = { 1, 2, 3, 4, 5 };
    for (int m = size(nums)-1; m >= 0; m--) {
        cout << nums[m] << " ";
    }
    

    //3
    int side[5] = {}, P = 0;
    for (int k = 0; k < 5; k++) {
        cout << "Enter the size of " << k + 1 << " side: ";
        cin >> side[k];
    }
    for (int l = 0; l < 5; l++) {
        P += side[l];
    }
    cout << "P = " << P << "\n\n";
    

    //4
    int prof[12] = {};
    for (int n = 0; n < 12; n++) {
        cout << "Enter profit for " << n + 1 << " month: ";
        cin >> prof[n];
    }
    int max = prof[0];
    int min = prof[0];
    for (int p = 0; p < 12; p++) {
        if (prof[p] > max) {
            max = prof[p];
        }
        if (prof[p] < min) {
            min = prof[p];
        }
    }
    cout << "Min = " << min << "\nMax = " << max << "\n\n";
}
