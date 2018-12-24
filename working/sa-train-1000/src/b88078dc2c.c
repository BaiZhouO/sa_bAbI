#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[32];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_8[21];                       // Tag.BODY
    entity_0 = 90;                           // Tag.BODY
    entity_1 = 24;                           // Tag.BODY
    entity_2 = 84;                           // Tag.BODY
    if(entity_2 < entity_0){                 // Tag.BODY
    entity_2 = 55;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 11;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_2] = '4';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_2;                    // Tag.POINTER_DEC
    entity_4[entity_1] = 'U';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_9 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER