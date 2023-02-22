int main(){
    
    ll x1, y1, x2, y2, x3, y3;
    
    scanf("%lld%lld%lld%lld%lld%lld", &x1, &y1, &x2, &y2, &x3, &y3);
    
    double s = 0.5 * abs((x1 * y2) + (x3 * y1) + (x2 * y3) - (x3 * y2) - (x2 * y1) - (x1 * y3)); // через матрицу
    
    
    printf("%.7lf\n", s);
        
    return 0;

}
