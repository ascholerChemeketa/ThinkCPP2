vector<int> make(int n) {
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        a.at(i) = i + 1;
    }
    return a;
}
