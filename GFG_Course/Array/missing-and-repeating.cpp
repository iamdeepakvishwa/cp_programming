
void findNumbers(int arr[], int n) {
    int sum_linear = (n * (n + 1)) / 2;
    int sum_square = (n * (n + 1) * (2 * n + 1)) / 6;
    int sum_current = 0, sum_sq_current = 0;
    for (int i = 0; i < n; i++){
        sum_current += arr[i];
        sum_sq_current = sum_sq_current + (pow(arr[i], 2));
    }
    int missing = (((sum_sq_current - sum_square) / (sum_current - sum_linear)) + sum_linear - sum_current) / 2;
    int repeated = sum_current - sum_linear + missing;
    cout<<A<<" "<<B;
}
