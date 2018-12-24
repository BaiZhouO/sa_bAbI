#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[87];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_9[82];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_7 = 75;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 6;                            // Tag.BODY
    entity_5 = 44;                           // Tag.BODY
    if(entity_8 < entity_7){                 // Tag.BODY
    entity_8 = 67;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 69;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_5] = '8';                // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_8] = '6';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER