const lli MAXN = 1e7;
vector<bool> is_prime(MAXN, true);
vector<lli> primes;
void Sieve() {
    is_prime[0] = is_prime[1] = false;
    for(lli p = 2; p * p < MAXN; p++) 
    {
        if(is_prime[p]) 
        {
            for(lli i = p * p; i < MAXN; i += p) 
            {
                is_prime[i] = false;
            }
        }
    }
    for(lli p = 2; p < MAXN; p++) 
    {
        if (is_prime[p]) 
        {
            primes.push_back(p);
        }
    }
}