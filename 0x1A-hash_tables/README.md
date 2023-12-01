# 0x1A. C - Hash tables

A hash table is a data structure that implements an associative array abstract data type, a structure that can map keys to values. It uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.
The key idea is to be able to access data quickly by using the key. The hash function is used to transform the key into the index of the array where the corresponding value is stored.
Collisions, where two keys hash to the same index, can be handled in various ways, such as by using linked lists to store all values that hash to a particular index.

## Tasks/Files

### 0. >>> ht = {}
0-hash_table_create.c

### 1. djb2
1-djb2.c

### 2. key -> index
2-key_index.c

### 3. >>> ht['betty'] = 'cool'
3-hash_table_set.c

### 4. >>> ht['betty']
4-hash_table_get.c

### 5. >>> print(ht)
5-hash_table_print.c

### 6. >>> del ht
6-hash_table_delete.c
