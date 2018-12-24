#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    entity_5 = 71;                           // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_1[44];                       // Tag.BODY
    entity_9 = 60;                           // Tag.BODY
    if(entity_5 < entity_9){                 // Tag.BODY
    entity_5 = 99;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 43;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_5] = 'H';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_5;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    char entity_2[28];                       // Tag.BODY
    char *entity_7 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8 = 1;                            // Tag.BODY
    entity_2[entity_8] = 'v';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER