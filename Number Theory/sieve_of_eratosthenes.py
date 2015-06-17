def sieve_of_eratosthenes(n):
    bool_array = [True]*(n+1)
    for i in range(2,n+1):
        if bool_array[i]:
            iterator = 2*i
            while iterator < n+1:
                bool_array[iterator] = False
                iterator += i
    return [i for i in range(2,n+1) if bool_array[i]]
