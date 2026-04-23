char* capitalizeTitle(char* title) {
    int i = 0, j = 0;
    while(title[j]) {
        if(title[j] >= 'A' && title[j] <= 'Z') title[j] += 32;
        else if(title[j] == ' ') {
            if(j - i > 2) {
                if(title[i] >= 'a') title[i] -= 32;
            } else if(title[i] <= 'Z') title[i] += 32;
            i = j + 1;
        } 
        j++;
    }
    if(j - i > 2 && title[i] >= 'a') title[i] -= 32;
    else if(title[i] <= 'Z') title[i] += 32;
    return title;
}