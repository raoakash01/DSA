#include <iostream>
#include <vector>
using namespace std;

int add_merit(vector<int> merit_intensities) {
    int sum = 0;
    for (int intensity : merit_intensities) {
        sum += intensity;
    }
    return sum * sum;
}

int add_demerit(vector<int> demerit_intensities) {
    int sum = 0;
    for (int intensity : demerit_intensities) {
        sum += intensity;
    }
    return sum;
}

string evaluate_fate(vector<vector<char>> trials, vector<vector<int>> intensities) {
    int merit = 0;
    int demerit = 0;
    vector<int> merit_intensities;
    vector<int> demerit_intensities;

    for (int i = 0; i < trials.size(); i++) {
        for (int j = 1; j < trials[i].size(); j++) {
            if (trials[i][j] == 'G' && trials[i][j -1] == 'G') {
                merit_intensities.push_back(intensities[i][j]);
                if (j == trials[i].size() - 1 || trials[i][j + 1] != 'G') {
                    merit += add_merit(merit_intensities);
                    merit_intensities.clear();
                }
            }

            if (trials[i][j] == 'B' && trials[i][j - 1] == 'B') {
                demerit_intensities.push_back(intensities[i][j]);
                if (j == trials[i].size() - 1 || trials[i][j + 1] != 'B') {
                    demerit += add_demerit(demerit_intensities);
                    demerit_intensities.clear();
                }
            }
        }
    }

    if (merit > demerit) {
        return "Haven";
    } else {
        return "Hell";
    }
}

int main() {
    vector<vector<char>> trials = {{'B', 'G'}, {'B','G', 'B'}};
    vector<vector<int>> intensities = {{2, 3}, {1,2, 2}};
    
    string result = evaluate_fate(trials, intensities);
    cout << "Outcome: " << result << endl;
    
    return 0;
}

