int main(){
    
    double a, b;
    
    scanf("%lf%lf", &a, &b);
    printf("%.3lf ", (a * a + b * b) / 2);
    printf("%.3lf\n", (abs(a) + abs(b)) / 2);
    
    return 0;
}
