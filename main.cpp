#include <iostream>
#include "gtest/gtest.h"
#include <forward_list>
#include <algorithm>
#include <limits>

using namespace std;

struct mem_block_t {
    mem_block_t *next_mb; // next memory block or null
    size_t mb_size; // memory block size
    uint8_t buf[1]; // memory buffer of variable size
};

struct mem_file_img_t {
    mem_file_img_t *next_mfi; // next memory image file or null
    char path[PATH_MAX]; // file path
};

int main() {
    int mem_block_count;
    forward_list<mem_block_t> mem_block_list;
    forward_list<mem_file_img_t> mem_file_list;

    cout << "Enter mem block count: ";
    cin >> mem_block_count;

    return 0;
}
