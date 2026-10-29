#include <iostream>
#include <vector>

using namespace std;

vector<int> filterSales(vector<int>& sales, int threshold) {
    vector<int> filteredSales;
    for (int sale : sales) {
        if (sale >= threshold) {
            filteredSales.push_back(sale);
        }
    }
    return filteredSales;
}

int main() {
    vector<int> s1 = {150, 80, 200, 90, 300};
    vector<int> res1 = filterSales(s1, 100);
    for (int x : res1) cout << x << " ";
    cout << endl;

    vector<int> s2 = {100, 50, 100};
    vector<int> res2 = filterSales(s2, 100);
    for (int x : res2) cout << x << " ";
    cout << endl;

    vector<int> s3 = {};
    vector<int> res3 = filterSales(s3, 50);
    for (int x : res3) cout << x << " ";
    cout << endl;

    vector<int> s4 = {10, 20, 30};
    vector<int> res4 = filterSales(s4, 40);
    for (int x : res4) cout << x << " ";
    cout << endl;

    vector<int> s5 = {75, 75, 75};
    vector<int> res5 = filterSales(s5, 75);
    for (int x : res5) cout << x << " ";
    cout << endl;

    return 0;
}
