int main(){
    
    int a1, b1, a2, b2, a3, b3;
    scanf("%d%d%d%d%d%d", &a1, &b1, &a2, &b2, &a3, &b3);
    if(b2 > b1){
        swap(a2, a3); swap(b2, b3);
    }
    printf("%d %d\n", a1 - a3, b1 - b2);
    
    return 0;
}
