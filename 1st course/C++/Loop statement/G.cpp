int main() {
    
    long double x;
    
    scanf("%Lf", &x);
    
    long double E = 0.000000001; // V2 - V1 <= E
    
    long double value = 1, nextValue = 1 + x, add = x, f = 2;
    
    while(nextValue - value > E){
        add = (add / f++) * x;
        value = nextValue;
        nextValue += add;
    }
    
    printf("%.10Lf\n", nextValue);
    

    return 0;
}
