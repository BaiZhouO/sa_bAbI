#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    entity_5 = 39;                           // Tag.BODY
    char entity_9[63];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 19;                           // Tag.BODY
    if(entity_5 < entity_6){                 // Tag.BODY
    entity_5 = 30;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 23;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_5] = 'U';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER