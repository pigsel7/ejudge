ll f(int n){
    if(n == 1) return 1;
    return n * f(n - 1);
}


int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int a;
        scanf("%d", &a);
        printf("%lld\n", f(a));
    }
    
    return 0;
}