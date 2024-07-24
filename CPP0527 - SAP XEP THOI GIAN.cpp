#include<bits/stdc++.h>
using namespace std;

struct Time {
    int hours, minutes, seconds;
};

bool cmp(Time a, Time b) {
    if (a.hours < b.hours) return true;
    if (a.hours == b.hours && a.minutes < b.minutes) return true;
    if (a.hours == b.hours && a.minutes == b.minutes && a.seconds < b.seconds) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<Time> t;
    for (int i = 0; i < n; i++) {
        int hours, minutes, seconds;
        cin >> hours >> minutes >> seconds;
        Time time = {hours, minutes, seconds};
        t.push_back(time);
    }
    sort(t.begin(), t.end(), cmp);
    for (int i = 0; i < t.size(); i++) {
        cout << t[i].hours << " " << t[i].minutes << " " << t[i].seconds << endl;
    }
}