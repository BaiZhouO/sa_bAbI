#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_4[38];                       // Tag.BODY
    entity_6 = 62;                           // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 28;                           // Tag.BODY
    char entity_9[97];                       // Tag.BODY
    char entity_2[51];                       // Tag.BODY
    entity_1 = 52;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 3;                            // Tag.BODY
    if(entity_1 < entity_7){                 // Tag.BODY
    entity_2[entity_6] = 'e';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 49;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 16;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_0] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_1] = 'E';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER