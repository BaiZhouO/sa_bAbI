#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_4 = 33;                           // Tag.BODY
    entity_0 = 81;                           // Tag.BODY
    char entity_2[60];                       // Tag.BODY
    if(entity_4 < entity_0){                 // Tag.BODY
    entity_4 = 31;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 38;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_4] = 'b';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_4;                    // Tag.POINTER_DEC
    char entity_8[88];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_5[54];                       // Tag.BODY
    entity_1 = 71;                           // Tag.BODY
    char *entity_7 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 29;                           // Tag.BODY
    entity_5[entity_1] = 'c';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_9] = 'j';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER