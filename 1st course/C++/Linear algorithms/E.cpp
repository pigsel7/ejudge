int main(){
    
    ll a, b, c;
    
    scanf("%lld%lld%lld", &a, &b, &c);
    ll d = sqrt(b * b - (4 * a * c));
    
    printf("%lld %lld\n", (b * (-1) - d) / (2 * a), (b * (-1) + d) / (2 * a));
    
        
    return 0;
}
