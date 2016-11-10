#include "Rect.h"

struct c_priv {
    int second;
    int thrid;
};

contrived * dmp_contrived_new(int first, int second, int third) {
    contrived * working = malloc(sizeof(contrived));
    working->first = first;
    working->priv = malloc(sizeof(struct c_priv));
    working->priv->second = second;
    working->priv->thrid = third;
    return working;
}

void dmp_contrived_free(contrived * to_free) {
    free(to_free->priv);
    free(to_free);
}

int dmp_contrived_sum(contrived * ths) {
    return ths->first + 
                    ths->priv->second + 
                    ths->priv->thrid;
}
    
int dmp_contrived_get_second(contrived * ths) {
    return ths->priv->second;
}
    
void dmp_contrived_set_second(contrived * ths, int to_set) {
    ths->priv->second = to_set;
}
