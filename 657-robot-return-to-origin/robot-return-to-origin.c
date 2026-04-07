bool judgeCircle(char* moves) {
    int d1 = 0, d2 = 0;
    for(int i = 0; moves[i] != '\0'; i++) {
        if(moves[i] == 'U') d1++;
        else if(moves[i] == 'D') d1--;
        else if(moves[i] == 'R') d2++;
        else d2--;
    }
    return d1 == 0 && d2 == 0;
}