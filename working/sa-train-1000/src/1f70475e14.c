#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 33;                           // Tag.BODY
    char entity_2[74];                       // Tag.BODY
    entity_0 = 28;                           // Tag.BODY
    if(entity_5 < entity_0){                 // Tag.BODY
    entity_5 = 99;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 21;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_5] = 'c';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_5;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_8[13];                       // Tag.BODY
    char entity_4[25];                       // Tag.BODY
    entity_7 = 15;                           // Tag.BODY
    entity_4[entity_7] = 'v';                // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 25;                           // Tag.BODY
    char *entity_1 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8[entity_6] = 't';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER