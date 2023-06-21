#include <iostream>
#include <immintrin.h> // Header for AVX intrinsics

int main() {
    // Define input arrays
    float a[8] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f};
    float b[8] = {10.0f, 20.0f, 30.0f, 40.0f, 50.0f, 60.0f, 70.0f, 80.0f};
    float c[8]; // Result array

    // Perform vectorized addition using AVX
    __m256 avx_a = _mm256_loadu_ps(a); // Load a into AVX register
    __m256 avx_b = _mm256_loadu_ps(b); // Load b into AVX register
    __m256 avx_c = _mm256_add_ps(avx_a, avx_b); // Perform vector addition
    _mm256_storeu_ps(c, avx_c); // Store the result into c

    // Print the result
    std::cout << "Vector Addition Result: ";
    for (int i = 0; i < 8; i++) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
