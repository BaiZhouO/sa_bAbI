#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 20;                           // Tag.BODY
    char entity_4[32];                       // Tag.BODY
    entity_6 = 21;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 90;                           // Tag.BODY
    char entity_5[39];                       // Tag.BODY
    if(entity_6 < entity_8){                 // Tag.BODY
    entity_6 = 34;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 22;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_6] = 'i';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_6;                    // Tag.POINTER_DEC
    entity_5[entity_3] = 'C';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_0 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER