#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_7 = 20;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_8[23];                       // Tag.BODY
    char entity_5[70];                       // Tag.BODY
    entity_1 = 45;                           // Tag.BODY
    entity_3 = 33;                           // Tag.BODY
    if(entity_1 < entity_3){                 // Tag.BODY
    entity_1 = 6;                            // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 94;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_1] = 'j';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8[entity_7] = 'n';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER