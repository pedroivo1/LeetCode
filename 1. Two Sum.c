/**
   * Note: The returned array must be malloced, assume caller calls free().
*/
// #include <stdio.h>
// #include <stdlib.h>
// #include "uthash.h"

// int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//     struct hashTable {
//         int key;
//         int value;
//         UT_hash_handle hh;
//     } *hashTable = NULL, *item;

//     for (size_t i = 0; i < numsSize; i++)
//     {
//         int complement = target - nums[i];
//         HASH_FIND_INT(hashTable, &complement, item)
//     }

// }
