- Normal recursion - O(N)
example -
int recfactorial(x){
    if(x <= 1){
        return 1;
    }else{
        return x* recfactorial(x - 1);
    }
}


- Tail recursion - O(1)
example -
int tailFactorial(x, totalSoFar = 1){
    if(x == 0){
        return totalSoFar;
    }else{
        return tailFactorial(x - 1, totalSoFar * x);
    }
}

- above scenrio is just because we don't have any value associated with the recursion that make the recursion to take less time. 
- c++ really don't support the tail recursion but the optimization is supported by the GCC.