void plusMinus(vector<int> arr) {
    int s = arr.size(), p = 0, n = 0, z = 0;

    for (int i = 0; i < s; i++) {
        if (arr[i] > 0) p++;
        else
         if (arr[i] < 0) n++;
        else 
        z++;
    }

    cout << fixed << setprecision(6);
    cout << (double)p / s << endl;
    cout << (double)n / s << endl;
    cout << (double)z / s << endl;
    
}