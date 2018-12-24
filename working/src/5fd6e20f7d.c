#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_8[96];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_3 = 63;                           // Tag.BODY
    char entity_2[73];                       // Tag.BODY
    entity_4 = 36;                           // Tag.BODY
    entity_9 = 75;                           // Tag.BODY
    if(entity_3 < entity_4){                 // Tag.BODY
    entity_3 = 56;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 35;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_3] = 't';                // Tag.BUFWRITE_COND_SAFE
    entity_8[entity_9] = 'h';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER