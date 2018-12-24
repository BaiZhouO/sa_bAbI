#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_1[55];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_0[38];                       // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_7 = 75;                           // Tag.BODY
    entity_3 = 33;                           // Tag.BODY
    if(entity_9 < entity_7){                 // Tag.BODY
    entity_1[entity_3] = 'b';                // Tag.BUFWRITE_TAUT_SAFE
    } else {                                 // Tag.BODY
    entity_9 = 69;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_9] = '4';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_9;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    entity_4 = 4;                            // Tag.BODY
    char *entity_5 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[68];                       // Tag.BODY
    entity_8[entity_4] = 'd';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER