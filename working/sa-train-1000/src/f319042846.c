#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_4[85];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    entity_7 = 52;                           // Tag.BODY
    char entity_5[65];                       // Tag.BODY
    entity_2 = 58;                           // Tag.BODY
    if(entity_8 < entity_7){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 75;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_8] = 'K';                // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_2] = 'U';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER