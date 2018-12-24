#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_0[64];                       // Tag.BODY
    entity_9 = 28;                           // Tag.BODY
    entity_8 = 87;                           // Tag.BODY
    char entity_2[96];                       // Tag.BODY
    entity_4 = 39;                           // Tag.BODY
    entity_2[entity_8] = 'V';                // Tag.BUFWRITE_TAUT_SAFE
    if(entity_4 < entity_9){                 // Tag.BODY
    entity_4 = 90;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 96;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = 'a';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_4;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char *entity_6 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[34];                       // Tag.BODY
    entity_3 = 3;                            // Tag.BODY
    entity_7[entity_3] = 'u';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER