is_prime(int n){
    int dividers
    bool is_prime_num = false;
    for(int i; i < n; i++){
        if(n % i == 0){
            dividers++;
        }
    }
    if(dividers == 2){
        is_prime_num = true;
    }
    return is_prime_num;
}

gcd(int a, int b){
    return std::gsd(a, b);
}

factorial(int n){
    if(n <= 0){
        return 0
    }
    if(n == 1){
        return 1
    }
    return factorial(n - 1) + factorial(n - 2)
}
