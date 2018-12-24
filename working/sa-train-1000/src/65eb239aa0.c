#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    entity_4 = 83;                           // Tag.BODY
    char entity_5[63];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 27;                           // Tag.BODY
    if(entity_1 < entity_4){                 // Tag.BODY
    entity_1 = 59;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 22;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_1] = 'F';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_1;                    // Tag.POINTER_DEC
    char entity_9[97];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    char *entity_2 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 44;                           // Tag.BODY
    entity_9[entity_8] = 't';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER