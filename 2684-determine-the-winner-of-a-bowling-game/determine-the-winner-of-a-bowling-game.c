int isWinner(int* player1, int player1Size, int* player2, int player2Size) {
    int x = player1[0], y = player2[0];
    if(player1Size > 1) {
        if(player1[0] == 10) x += 2 * player1[1];
        else x += player1[1];
        if(player2[0] == 10) y += 2 * player2[1];
        else y += player2[1];
    }
    for(int i = 2; i < player1Size; i++) {
        if(player1[i - 1] == 10 || player1[i - 2] == 10) x += 2 * player1[i];
        else x += player1[i];
        if(player2[i - 1] == 10 || player2[i - 2] == 10) y += 2 * player2[i];
        else y += player2[i];
    }
    if(x > y) return 1;
    else if(x < y) return 2;
    return 0;
}