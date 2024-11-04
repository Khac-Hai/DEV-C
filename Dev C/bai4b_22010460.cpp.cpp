template<typename T>
void findMinMax(T arr[], int size, T &max, T &min) {
    max = min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
}
