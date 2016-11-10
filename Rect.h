#ifndef HEADER_FILE
#define HEADER_FILE

typedef struct _contrived {
    int first;
    struct c_priv * priv;
} contrived;
    
contrived * dmp_contrived_new(int first, int second, int third);

void dmp_contrived_free(contrived * to_free);
    
int dmp_contrived_sum(contrived * ths);
    
int dmp_contrived_get_second(contrived * ths);

void dmp_contrived_set_second(contrived * ths, int to_set);

#endif
