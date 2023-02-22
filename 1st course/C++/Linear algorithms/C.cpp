int main(){
    
    ll r, R;
    
    scanf("%lld%lld", &r, &R);
    if(r > R) swap(r, R);
    
    
    printf("%.7lf\n", PI * (R * R - r * r));
    

    return 0;    
}
