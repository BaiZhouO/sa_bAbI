#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[82];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_5 = 37;                           // Tag.BODY
    entity_9 = 64;                           // Tag.BODY
    if(entity_5 < entity_9){                 // Tag.BODY
    entity_5 = 29;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 63;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_5] = 'o';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER