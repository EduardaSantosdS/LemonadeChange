bool lemonadeChange(int* bills, int billsSize) {
    int v5 = 0;
    int v10 = 0;
    
    for (int i = 0; i < billsSize; i++) {
        if (bills[i] == 5) {
            v5++;
        } else if (bills[i] == 10) {
            if (v5 >= 1) {
                v5--;
                v10++;
            } else {
                return false;
            }
        } else if (bills[i] == 20) {
            if (v10 >= 1 && v5 >= 1) {
                v10--;
                v5--;
            } else if (v5 >= 3) {
                v5 -= 3;
            } else {
                return false;
            }
        }
    }
    return true;
}