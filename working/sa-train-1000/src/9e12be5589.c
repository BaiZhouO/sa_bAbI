#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_4[90];                       // Tag.BODY
    entity_5 = 32;                           // Tag.BODY
    entity_8 = 25;                           // Tag.BODY
    if(entity_5 < entity_8){                 // Tag.BODY
    entity_5 = 39;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 28;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_5] = 'B';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER