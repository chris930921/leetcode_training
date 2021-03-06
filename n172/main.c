int trailingZeroes(int n) {
    int numOfZero = 0;
    
    // 只要因子中有 2 和 5 出現，相乘後尾端就會出現 0 。
    // 而 2 的數量都會多於 5 的數量，所以找出 5 個個數就能知道尾端出現幾個 0。
    // x = 5，將 n 除以 x，找出所有 5 的倍數的數字，但像是 25 這種 5*5 的數字，就會少算一個 5。
    // x = 25，將 n 除以 x，找出所有 25 的倍數的數字，補上少算的第二個 5。
    // x = 125，將 n 除以 x，找出所有 125 的倍數的數字，補上少算的第三個 5。
    // 計算直到 n < x。
    while(n >= 5){
        n /= 5;
        numOfZero += n;
    }
    
    return numOfZero;
}