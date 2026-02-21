int findWinningPlayer(int* skills, int skillsSize, int k) {
    int ans = 0, max = skills[0], c = 0;
    for(int i = 1; i < skillsSize; i++) {
        if(skills[i] > max) {
            ans = i;
            max = skills[i];
            c = 1;
        } else c++;
        if(c == k) return ans;
    }
    return ans;
}