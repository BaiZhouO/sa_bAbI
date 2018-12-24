#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 93;                           // Tag.BODY
    char entity_0[57];                       // Tag.BODY
    char entity_2[68];                       // Tag.BODY
    entity_6 = 82;                           // Tag.BODY
    entity_1 = 94;                           // Tag.BODY
    if(entity_6 < entity_1){                 // Tag.BODY
    entity_6 = 29;                           // Tag.BODY
    entity_2[entity_7] = 'C';                // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                 // Tag.BODY
    entity_6 = 46;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_6] = 'L';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_6;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    char entity_9[88];                       // Tag.BODY
    char *entity_5 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 59;                           // Tag.BODY
    entity_9[entity_8] = 'n';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER