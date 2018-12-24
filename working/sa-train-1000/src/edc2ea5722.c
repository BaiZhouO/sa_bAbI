#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 20;                           // Tag.BODY
    char entity_1[34];                       // Tag.BODY
    entity_9 = 95;                           // Tag.BODY
    entity_3 = 64;                           // Tag.BODY
    char entity_7[26];                       // Tag.BODY
    if(entity_3 < entity_9){                 // Tag.BODY
    entity_3 = 1;                            // Tag.BODY
    entity_7[entity_2] = '1';                // Tag.BUFWRITE_TAUT_SAFE
    } else {                                 // Tag.BODY
    entity_3 = 61;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_3] = 'f';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER