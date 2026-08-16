int nearestDrone(int** drones, int dronesSize, int* dronesColSize, int* target, int targetSize) {
    int ans = -1, dis = 101;
    for(int i = 0; i < dronesSize; i++) {
        int man_dis = abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);
        if(man_dis <= drones[i][2] && man_dis < dis) {
            dis = man_dis;
            ans = i;
        }
    }
    return ans;
}