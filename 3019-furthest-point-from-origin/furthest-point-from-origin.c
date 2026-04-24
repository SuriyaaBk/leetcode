int furthestDistanceFromOrigin(char* moves) {
    int points = 0, dash = 0;
    for(int i = 0; moves[i]; i++) {
        if(moves[i] == '_') dash++;
        else if(moves[i] == 'L') points--;
        else points++;
    }
    return dash + abs(points);
}