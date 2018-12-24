#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_6[59];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_7[4];                        // Tag.BODY
    entity_9 = 49;                           // Tag.BODY
    entity_6[entity_9] = 't';                // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = rand();                       // Tag.BODY
    entity_3 = 7;                            // Tag.BODY
    if(entity_2 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 61;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_2] = '9';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_2;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    entity_1 = 79;                           // Tag.BODY
    char *entity_8 = (char *)(entity_4 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[76];                       // Tag.BODY
    entity_0[entity_1] = '8';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER