//
// Created by https://gist.github.com/tonious
//

#ifndef HASHTABLE_MY
#define HASHTABLE_MY


struct entry_s {
    char *key;
    char *value;
    struct entry_s *next;
};

typedef struct entry_s entry_t;

struct hashtable_s {
    int size;
    struct entry_s **table;
};

typedef struct hashtable_s hashtable_t;

hashtable_t *ht_create(int size);

int ht_hash(hashtable_t *hashtable, char *key);

entry_t *ht_newpair(char *key, char *value);
void ht_set(hashtable_t *hashtable, char *key, char *value);
char *ht_get(hashtable_t *hashtable, char *key);

#endif //HASHTABLE_MY