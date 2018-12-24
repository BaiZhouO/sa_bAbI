#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_3[37];                       // Tag.BODY
    entity_7 = 28;                           // Tag.BODY
    entity_0 = 76;                           // Tag.BODY
    if(entity_7 < entity_0){                 // Tag.BODY
    entity_7 = 31;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 39;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_7] = 'Y';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_7;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 78;                           // Tag.BODY
    entity_9 = 6;                            // Tag.BODY
    char *entity_6 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[77];                       // Tag.BODY
    char entity_2[53];                       // Tag.BODY
    entity_2[entity_9] = 'c';                // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_4] = 'L';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER