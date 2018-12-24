#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    entity_1 = 95;                           // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_5[64];                       // Tag.BODY
    entity_6 = 49;                           // Tag.BODY
    if(entity_1 < entity_6){                 // Tag.BODY
    entity_1 = 43;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 29;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_1] = 'g';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER