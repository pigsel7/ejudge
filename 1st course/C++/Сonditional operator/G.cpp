int main() {
    
    int a, b, c;
    
    scanf("%d%d%d", &a, &b, &c);
    
    double d = (double)b * b - 4 * a * c;
    
    if(d < 0){
        printf("No roots\n");
        return 0;
    }
    
    double x1 = ((-1) * b - sqrt(d)) / (2 * a), x2 = ((-1) * b + sqrt(d)) / (2 * a);
    if(d == 0){
        printf("%.7lf\n", x1);
        return 0;
    }
    
    printf("%.7lf %.7lf\n", min(x1, x2), max(x1, x2));
    

    return 0;
}
