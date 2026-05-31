bool asteroidsDestroyed(int mass, int* asteroids, int asteroidsSize) {
    int* hash = (int*)calloc(100001, sizeof(int));
    int max = asteroids[0], min = asteroids[0];
    for(int i = 0; i < asteroidsSize; i++) {
        if(asteroids[i] > max) max = asteroids[i];
        if(asteroids[i] < min) min = asteroids[i];
        hash[asteroids[i]]++;
    }
    long sum = mass;
    for(int i = min; i <= max; i++) {
        if(hash[i] == 0) continue;
        if(sum < i) {
            free(hash);
            return false;
        }
        sum += ((long) i * hash[i]);
    }
    free(hash);  
    return true;
}