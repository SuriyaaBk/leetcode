int maxDistance(char* moves) {
    int x = 0, y = 0, z = 0;
    for(int i = 0; moves[i]; i++) {
        if(moves[i] == 'U') x++;
        else if(moves[i] == 'D') x--;
        else if(moves[i] == 'L') y--;
        else if(moves[i] == 'R') y++;
        else z++;
    }
    return abs(x) + abs(y) + z;
}