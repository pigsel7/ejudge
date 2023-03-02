int main() {
    
    int n;
    scanf("%d", &n);
    
    vector<string> s(n);
    
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(s[i] > s[j]) swap(s[i], s[j]);
        }
    }
    
    for(auto item : s){
        cout << item << endl;
    }
    
    return 0;
}
