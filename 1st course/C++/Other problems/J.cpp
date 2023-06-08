int main(){
    
    int t;
    scanf("%d", &t);
    
    while (t--){
        int n;
        scanf("%d", &n);
        int a = (int)sqrt(n + 1) * (int)sqrt(n + 1) - 1;
        int b = ceil(sqrt(n + 1)) * ceil(sqrt(n + 1)) - 1;
        printf("%d %d\n", a, b);
    }

    return 0;
}
