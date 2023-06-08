double f(double n){
    double ans = 1;
    
    for(int i = 2; i < n - 2; i++){
        if(i % 2){
            ans *= i;       //
            continue;       //  Умножаем на нечетные i и делим на четные i по полученной формуле
        }                   //
        ans /= i;
    }
    
    if(n != 2){
        ans /= (n - 2);     //  По формуле надо разделить на (n - 2), но надо проверить не будет ли деления на 0
    }
    
    return ans;
}




int main() {
    
    double n;
    scanf("%lf", &n);
    
    double result = f(n);
    
    printf("%.4lf\n", result);
        
    
    return 0;
}
