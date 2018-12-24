#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_6 = 88;                           // Tag.BODY
    entity_3 = 37;                           // Tag.BODY
    char entity_9[18];                       // Tag.BODY
    if(entity_3 < entity_6){                 // Tag.BODY
    entity_3 = 19;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 74;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_3] = 'H';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER