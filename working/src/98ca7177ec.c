#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_5 = 89;                           // Tag.BODY
    entity_9 = 28;                           // Tag.BODY
    char entity_8[53];                       // Tag.BODY
    if(entity_5 < entity_9){                 // Tag.BODY
    entity_5 = 33;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 1;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_5] = '9';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_5;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    char entity_2[66];                       // Tag.BODY
    char *entity_0 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 78;                           // Tag.BODY
    entity_2[entity_4] = 'r';                // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_7;                            // Tag.BODY
    char entity_6[32];                       // Tag.BODY
    entity_7 = 88;                           // Tag.BODY
    entity_6[entity_7] = 'g';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER