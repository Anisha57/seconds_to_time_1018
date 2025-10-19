#include <iostream>
#include "time_functions.h"
using namespace std;

int main() {
    int seconds_since_1970;

    cout << "Enter seconds since 1970: ";
    cin >> seconds_since_1970;

    int hours = get_hours(seconds_since_1970);
    int minutes = get_minutes(seconds_since_1970);
    int seconds = get_seconds(seconds_since_1970);

    cout << "Time (HH:MM:SS): "
         << hours << ":"
         << minutes << ":"
         << seconds << endl;

    return 0;
}
