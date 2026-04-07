int furthestDistanceFromOrigin(char* moves) {
    int left = 0, right = 0, dash = 0;
    for(int i = 0; moves[i]; i++) {
        if(moves[i] == '_') dash++;
        else if(moves[i] == 'L') left++;
        else right++;
    }
    return dash + abs(left - right);
}