#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_0[59];                       // Tag.BODY
    entity_2 = 83;                           // Tag.BODY
    entity_9 = 7;                            // Tag.BODY
    entity_4 = 64;                           // Tag.BODY
    char entity_8[38];                       // Tag.BODY
    if(entity_9 < entity_4){                 // Tag.BODY
    entity_9 = 21;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 24;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_9] = '4';                // Tag.BUFWRITE_COND_SAFE
    entity_8[entity_2] = 'j';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER