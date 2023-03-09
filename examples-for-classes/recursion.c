#include<stdio.h>
#include <sys/resource.h>


void print_raw_array_n_times(int n_times) {
    const int len = 100;
    uint8_t arr[len];
     
    printf("%d) ", n_times);
    // for(int i = 0; i < len; i++) printf("%d ", arr[i]);
    printf("\n");
    
    if (n_times > 1) {
        print_raw_array_n_times(n_times - 1);
    }
}
int main() {
    print_raw_array_n_times(500000);
}
