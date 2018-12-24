#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_3[46];                       // Tag.BODY
    entity_8 = 90;                           // Tag.BODY
    entity_0 = 14;                           // Tag.BODY
    if(entity_8 < entity_0){                 // Tag.BODY
    entity_8 = 67;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 21;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_8] = '2';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER