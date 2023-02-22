int main() {
    
    long double a;
    
    scanf("%Lf", &a);

    long double x = (long double)a;
    long double x2 = 0.5 * (x + (a / x));
    
    long double E = 0.000000001;
    
    int ans = 1;
    
    
    while(abs(x2 - x) >= E){
        x = x2;
        x2 = 0.5 * (x2 + (a / x2));
        ans++;
    }
    
    printf("%.9Lf\n%d\n", x2, ans);
   

    return 0;
}
