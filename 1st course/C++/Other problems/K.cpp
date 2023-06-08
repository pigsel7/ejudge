int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int a, b;
        scanf("%d%d", &a, &b);
        
        printf("%.3f %.3f\n", a + b + sqrt(a * a + b * b), 0.5 * a * b);
    }
    
    return 0;
}
