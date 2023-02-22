int main() {
    
    double x, y, x1, y1, x2, y2;
    
    scanf("%lf%lf%lf%lf%lf%lf", &x, &y, &x1, &y1, &x2, &y2);
    
    double l1, l2;
    
    l1 = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
    l2 = sqrt((x - x2) * (x - x2) + (y - y2) * (y - y2));
    
    if(abs(l1 - l2) < 0.000000001){
        printf("equal\n");
        printf("%.9lf\n", l1);
        return 0;
    }
    
    if(l1 < l2) printf("B\n%.9lf\n", l1);
    else printf("C\n%.9lf\n", l2);


    return 0;
}
