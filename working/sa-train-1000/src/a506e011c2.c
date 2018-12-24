#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_6[6];                        // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 87;                           // Tag.BODY
    entity_8 = 9;                            // Tag.BODY
    if(entity_8 < entity_5){                 // Tag.BODY
    entity_8 = 88;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 75;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_8] = 'u';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_8;                    // Tag.POINTER_DEC
    char entity_3[62];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    char *entity_9 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 87;                           // Tag.BODY
    entity_3[entity_4] = 'd';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER