#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_0[44];                       // Tag.BODY
    entity_9 = 61;                           // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 32;                           // Tag.BODY
    if(entity_9 < entity_7){                 // Tag.BODY
    entity_9 = 91;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 30;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_9] = 'j';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER