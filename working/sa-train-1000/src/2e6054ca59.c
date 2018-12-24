#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_0 = 71;                           // Tag.BODY
    char entity_2[46];                       // Tag.BODY
    entity_5 = 88;                           // Tag.BODY
    if(entity_0 < entity_5){                 // Tag.BODY
    entity_0 = 75;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 21;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_0] = '5';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_0;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER