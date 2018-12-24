#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 64;                           // Tag.BODY
    entity_8 = 60;                           // Tag.BODY
    char entity_1[49];                       // Tag.BODY
    if(entity_7 < entity_8){                 // Tag.BODY
    entity_7 = 88;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 83;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_7] = '2';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_7;                    // Tag.POINTER_DEC
    char entity_9[1];                        // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 19;                           // Tag.BODY
    entity_9[entity_4] = 'X';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_3 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER