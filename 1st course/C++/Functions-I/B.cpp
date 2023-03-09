void MinMax(int a, int b, int c, int d, int &maxv, int &minv){
    vector<int> v(4);
    
    v[0] = a; v[1] = b; v[2] = c; v[3] = d;
    sort(all(v));
    
    minv = v[0];
    maxv = v[3];
}

int main(){
    
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int maxv, minv;
    
    MinMax(a, b, c, d, maxv, minv);
    
    printf("%d %d\n", minv, maxv);
    
    return 0;
}
