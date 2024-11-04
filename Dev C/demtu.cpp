#include <bits/stdc++.h>


using namespace std;

int demtu(const string &str) {
    int sotu = 0;
    int i = 0;

    while (i < str.size()) {
        while (i < str.size() && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) {
            i++;
        }

        if (i < str.size()) {
            sotu++;
        }

        
        while (i < str.size() && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            i++;
        }
    }

    return sotu;
}
int main() {
    int T;
    cin >> T; 

    cin.ignore(); 

    for (int t = 0; t < T; ++t) {
        string S;
        getline(cin, S); 

        int sotu = demtu(S);
        cout << sotu << endl;
    }

    return 0;
}

