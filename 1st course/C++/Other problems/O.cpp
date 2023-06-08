int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        double a, b;
        scanf("%d%lf%lf", &n, &a, &b);
        
        double h = (b - a) / (n - 1);
        double x = a;
        
        for(int i = 0; i < n; i++){
            cout << "X=" << sp(3) << x << " F(X)=" << 1 - sin(x) << endl;
            x += h;
        }
    }
    
    return 0;
}
