#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_5 = 80;                           // Tag.BODY
    entity_8 = 22;                           // Tag.BODY
    char entity_4[53];                       // Tag.BODY
    if(entity_5 < entity_8){                 // Tag.BODY
    entity_5 = 17;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 6;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_5] = 'V';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER