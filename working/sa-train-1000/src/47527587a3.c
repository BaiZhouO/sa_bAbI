#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_8[92];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_3[25];                       // Tag.BODY
    entity_1 = 46;                           // Tag.BODY
    entity_0 = 55;                           // Tag.BODY
    entity_8[entity_1] = 'G';                // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 36;                           // Tag.BODY
    if(entity_0 < entity_6){                 // Tag.BODY
    entity_0 = 88;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 93;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_0] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER