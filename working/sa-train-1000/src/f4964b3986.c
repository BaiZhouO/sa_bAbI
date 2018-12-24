#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_3[90];                       // Tag.BODY
    entity_8 = 9;                            // Tag.BODY
    entity_6 = 13;                           // Tag.BODY
    if(entity_8 < entity_6){                 // Tag.BODY
    entity_8 = 8;                            // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 77;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_8] = '7';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER