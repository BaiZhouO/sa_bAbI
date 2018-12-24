#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_1[73];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_5 = 87;                           // Tag.BODY
    entity_7 = 59;                           // Tag.BODY
    entity_8 = 31;                           // Tag.BODY
    char entity_6[45];                       // Tag.BODY
    if(entity_5 < entity_8){                 // Tag.BODY
    entity_5 = 52;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 83;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_7] = '2';                // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_5] = 'Z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_5;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    char entity_3[45];                       // Tag.BODY
    char *entity_2 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 26;                           // Tag.BODY
    entity_3[entity_9] = 'E';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER