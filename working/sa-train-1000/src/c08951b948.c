#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_5[18];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 30;                           // Tag.BODY
    entity_4 = 20;                           // Tag.BODY
    if(entity_4 < entity_1){                 // Tag.BODY
    entity_4 = 82;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 84;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_4] = 'Q';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER