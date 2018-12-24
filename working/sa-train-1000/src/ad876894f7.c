#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_5[97];                       // Tag.BODY
    char entity_0[93];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_7 = 93;                           // Tag.BODY
    entity_9 = 43;                           // Tag.BODY
    entity_8 = 93;                           // Tag.BODY
    if(entity_9 < entity_7){                 // Tag.BODY
    entity_9 = 46;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 79;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_9] = 'y';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_5[entity_8] = 'A';                // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_6;                            // Tag.BODY
    entity_6 = 29;                           // Tag.BODY
    char entity_2[72];                       // Tag.BODY
    entity_2[entity_6] = 'J';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER