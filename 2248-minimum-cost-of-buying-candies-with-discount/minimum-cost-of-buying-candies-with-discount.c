int compare(const void* a,const void* b){
    return *(int*)b - *(int*)a; 
}
int minimumCost(int* cost, int costSize) {
    qsort(cost,costSize,sizeof(int),compare);
    int tot = 0, c = 1;
    for(int i = 0; i < costSize; i++) {
        if(c % 3 == 0 && c != 0) {
            c++;
            continue;
        }
        else{
            tot += cost[i];
            c++;
        }
    }   
    return tot;
}