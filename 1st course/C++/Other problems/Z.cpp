int main(){
    
    freopen("Z.inp", "r", stdin);
    freopen("Z.out", "w", stdout);
    
    int t;
    cin >> t;
    
    while(t--){
    
        int n, m;
        cin >> n >> m;
    
        for(int i = 0; i < n * m; i++){
            if((i + 1) % m == 0) cout << i + 1 << "\n";
            else cout << i + 1 << " ";
        }
    }
    
    return 0;
}
