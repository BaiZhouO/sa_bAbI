#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 53;                           // Tag.BODY
    entity_1 = 75;                           // Tag.BODY
    char entity_9[13];                       // Tag.BODY
    if(entity_1 < entity_0){                 // Tag.BODY
    entity_1 = 52;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 79;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_1] = 'Q';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_1;                    // Tag.POINTER_DEC
    char entity_7[86];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_6 = 81;                           // Tag.BODY
    char *entity_4 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[87];                       // Tag.BODY
    entity_2 = 49;                           // Tag.BODY
    entity_8[entity_6] = 'Z';                // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_2] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER