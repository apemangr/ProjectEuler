#include <stdint.h>
#include <vector>

class Primes {
  public:
    Primes() {}
    uint32_t get_prime(uint32_t n);
    bool is_prime(uint32_t n);

  private:
    void calc_primes(uint32_t start);
    void expand_sieve();
    uint32_t multiple_gte(uint32_t n, uint32_t divisor);

    static const uint32_t expand_size = (1 << 15);
    std::vector<bool> composite;
    std::vector<uint32_t> primes;

};
