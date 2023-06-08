int main(){
    
    int r, n, c = 1;
    
    while(true){
        scanf("%d%d", &r, &n);
        if(!r && !n) break;
        
        int ans = (r + n - 1) / n - 1;
        cout << "Case " << c++ << ": " << (ans > 26 ? "impossible" : to_string(ans)) << endl;
    }
    
    return 0;
}
