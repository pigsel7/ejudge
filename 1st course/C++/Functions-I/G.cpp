int main() {
    
    double n;
    scanf("%lf", &n);
    
    double ans = 1;
    double d = 2;
    
    for(int i = 1; i * 2 + 1 < n; i++){
        ans *= (n / 2 - (i + d++) / 2) / (n / 2 - i);
    }
    
    printf("%.4lf\n", ans);
        
    
    return 0;
}
