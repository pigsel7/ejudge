double log4(double a){
    //new base: log a(b) = log c(b) / log c(a);
    return log10(a) / log10(4);
}

int round_up(double a){
    if((int)a == a) return (int)a;
    return (int)(a + 1);
}

double f(double x){
    return (sin(x) + sqrt(log4(3 * x)) + round_up(3 * pow(_E, x)));
}

int main(){
    
    double x;
    
    while(cin >> x){
        printf("%.7lf\n", f(x));
    }
    
    return 0;
}
