int main() {
    
    int n;
    
    scanf("%d", &n);
    
    int tmp;
    vector<vector<int>> v(n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        v[i].pb(tmp);
        v[i].pb(i);
    }
    
    sort(v.begin(), v.end());
    int m = v[1][0] - v[0][0];
    
    pair<int, int> ans;
    
    for(int i = 1; i < n; i++){
        if(v[i][0] - v[i - 1][0] <= m){
            m = v[i][0] - v[i - 1][0];
            ans.first = min(v[i][1], v[i - 1][1]);
            ans.second = max(v[i][1], v[i - 1][1]);
        }
    }
    
    printf("%d %d\n", ans.first, ans.second);
    

    return 0;
}
