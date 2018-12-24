#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_3[40];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 49;                           // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_1[64];                       // Tag.BODY
    entity_2 = 22;                           // Tag.BODY
    entity_5 = 75;                           // Tag.BODY
    if(entity_2 < entity_8){                 // Tag.BODY
    entity_2 = 63;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 3;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_5] = 'i';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_2] = 'N';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER