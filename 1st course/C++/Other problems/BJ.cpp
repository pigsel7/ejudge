int a[100];

int main(){
    
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);

    int king = 0;
    for(int i = -1; i < 2; i++){
        for(int j = -1; j < 2; j++){
            if(i == 0 && j == 0) continue;
            if(x + i <= n && y + j <= n && x + i > 0 && y + j > 0) king++;
        }
    }
    int rook = 2 * n - 2;
    int bishop = min(n - y, n - x) + min(n - x, y - 1) + min(n - y, x - 1) + min(x - 1, y - 1);
    int queen = rook + bishop;
    
    int k[8][2] = { {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1} };
    int knight = 0;
    for (int i = 0; i < 8; i++){
        if(x + k[i][0] > 0 && x + k[i][0] <= n && y + k[i][1] > 0 && y + k[i][1] <= n)knight++;
    }
    
    printf("King: %d\n", king);
    printf("Knight: %d\n", knight);
    printf("Bishop: %d\n", bishop);
    printf("Rook: %d\n", rook);
    printf("Queen: %d\n", queen);
    
    return 0;
}
