#include <map>
#include <iostream>
using namespace std;

long long C(long long n, long long k) {
    auto result = 1ll;
    for(auto i = 1; i <= k; i++) {
        result = result * (n - i + 1);
        result = result / i;
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    for(int N; cin >> N; ) {
        map<int, int> A;
        for(auto i = 0; i != N; i++) {
            int j;
            cin >> j;
            A[j]++;
        }
        auto result = 0ll;
        for(auto& i : A) {
            result += C(i.second, 2) * 2;
        }
        cout << result << endl;
    }
    return 0;
}
