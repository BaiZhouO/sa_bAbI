#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_3[13];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 72;                           // Tag.BODY
    entity_6 = 87;                           // Tag.BODY
    if(entity_6 < entity_8){                 // Tag.BODY
    entity_6 = 78;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 36;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_6] = 't';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_6;                    // Tag.POINTER_DEC
    int entity_2;                            // Tag.BODY
    entity_2 = 3;                            // Tag.BODY
    char *entity_4 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_1[79];                       // Tag.BODY
    entity_1[entity_2] = 'q';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER