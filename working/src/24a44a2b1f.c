#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_6[9];                        // Tag.BODY
    char entity_7[27];                       // Tag.BODY
    entity_9 = 87;                           // Tag.BODY
    entity_1 = 45;                           // Tag.BODY
    entity_8 = 74;                           // Tag.BODY
    if(entity_8 < entity_1){                 // Tag.BODY
    entity_8 = 64;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 17;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_8] = '8';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_6[entity_9] = 'l';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = &entity_8;                    // Tag.POINTER_DEC
    int entity_2;                            // Tag.BODY
    char *entity_3 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2 = 26;                           // Tag.BODY
    char entity_0[81];                       // Tag.BODY
    entity_0[entity_2] = 'Z';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER