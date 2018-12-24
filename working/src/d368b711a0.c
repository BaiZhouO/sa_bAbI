#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_4[90];                       // Tag.BODY
    entity_9 = 2;                            // Tag.BODY
    entity_7 = 94;                           // Tag.BODY
    if(entity_7 < entity_9){                 // Tag.BODY
    entity_7 = 35;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 62;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_7] = 'S';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER