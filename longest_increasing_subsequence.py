'''
Returns the length of the longest increasing subsequence in n
'''

def longest_increasing_subsequence(n):
    s = [1]*len(n)
    s[-1] = 1
    for i in range(len(n)):
        for j in range(i):
            if n[i]>n[j] and s[i]<s[j]+1:
                s[i] = s[j]+1

    return max(s)
'''
Returns the length of the longest decreasing subsequece in n
'''
def longest_decreasing_subsequence(n):
    s = [1]*len(n)
    s[-1] = 1
    for i in range(len(n)):
        for j in range(i):
            if n[i]<n[j] and s[i]<s[j]+1:
                s[i] = s[j]+1

    return max(s)
        
