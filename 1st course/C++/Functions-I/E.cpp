int Kramer(int A[][2], int *B, double &x, double &y){
    int D = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    int D1 = B[0] * A[1][1] - A[0][1] * B[1];
    int D2 = A[0][0] * B[1] - B[0] * A[1][0];
    
    if(D == 0){
        if(D1 == 0 && D2 == 0) return 1;
        return 0;
    }
    
    x = (double)D1 / D;
    y = (double)D2 / D;
    
    return 3;
}



int main(){
    
    int A[2][2];
    int B[2];
    
    double x, y;
    
    scanf("%d%d%d%d%d%d", &A[0][0], &A[0][1], &B[0], &A[1][0], &A[1][1], &B[1]);
    
    int result = Kramer(A, B, x, y);
    
    if (result == 0) printf("No solution!\n");
    if (result == 1) printf("Infinity!\n");
    if (result == 3) printf("%.6lf %.6lf\n", x, y);
    
    return 0;
}
