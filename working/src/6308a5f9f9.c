#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_7[51];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_2 = 38;                           // Tag.BODY
    char entity_9[95];                       // Tag.BODY
    entity_8 = 64;                           // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    if(entity_3 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 75;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_3] = 'g';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_3;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    char *entity_1 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[64];                       // Tag.BODY
    entity_6 = 62;                           // Tag.BODY
    entity_7[entity_2] = 'T';                // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_6] = 'Q';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER