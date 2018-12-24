#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_8[43];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_2[53];                       // Tag.BODY
    entity_4 = 87;                           // Tag.BODY
    entity_6 = 80;                           // Tag.BODY
    entity_7 = 22;                           // Tag.BODY
    if(entity_4 < entity_6){                 // Tag.BODY
    entity_4 = 39;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 17;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_4] = 'N';                // Tag.BUFWRITE_COND_SAFE
    entity_2[entity_7] = 'C';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER