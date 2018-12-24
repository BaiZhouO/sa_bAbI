#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_7 = 26;                           // Tag.BODY
    entity_3 = 71;                           // Tag.BODY
    char entity_8[70];                       // Tag.BODY
    if(entity_3 < entity_7){                 // Tag.BODY
    entity_3 = 84;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 63;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_3] = '3';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_3;                    // Tag.POINTER_DEC
    char entity_6[9];                        // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_4[78];                       // Tag.BODY
    char *entity_0 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 69;                           // Tag.BODY
    entity_6[entity_9] = 'f';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 73;                           // Tag.BODY
    entity_4[entity_2] = 't';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER