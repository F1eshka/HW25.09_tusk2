#include <iostream>
using namespace std;

void Show(double arr[], int total)
{
    double min = arr[0];
    double max = arr[0];
    int min_ind = 0;
    int max_ind = 0;

    for (int i = 1; i < total; ++i) {
        if (arr[i] < min) {
            min = arr[i];
            min_ind = i;
        }

        if (arr[i] > max) {
            max = arr[i];
            max_ind = i;
        }
    }
    cout << "минимально число: " << min << " минимальный индекс: " << min_ind + 1 << "\n";
    cout << "максимальное число: " << max << " максимальный индекс: " << max_ind + 1 << "\n";
}

int main()
{
    setlocale(LC_ALL, "ru");

    double arr[] = { -10.5, -11.2, 5.8, 23.4, 0.5 };
    int total = 5;
    Show(arr, total);
}