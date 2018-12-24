#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    entity_1 = 12;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_7[84];                       // Tag.BODY
    entity_8 = 82;                           // Tag.BODY
    if(entity_1 < entity_8){                 // Tag.BODY
    entity_1 = 43;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 98;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_1] = '1';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER