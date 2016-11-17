#include <stdio.h>
#include "Rect.h"

int main() {
    
    Rect *rect1 = new_rect(2, 5);
    printf("rect1\narea: %d\n", rect1->m_area());

    prinf("\n%d\n", rect1->priv->width);

    return 0;
}
