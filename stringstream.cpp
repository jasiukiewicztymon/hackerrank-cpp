#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	istringstream ss(str);
    string token;
    vector<int> output;
    while(getline(ss, token, ','))
        output.emplace_back(stoi(token));
    return output;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << endl;
    }
    return 0;
}
