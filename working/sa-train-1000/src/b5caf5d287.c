#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    char entity_5[88];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_0 = 13;                           // Tag.BODY
    entity_3 = 71;                           // Tag.BODY
    if(entity_0 < entity_3){                 // Tag.BODY
    entity_0 = 60;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 15;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_0] = 'V';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER