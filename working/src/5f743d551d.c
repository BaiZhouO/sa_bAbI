#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_3[58];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_5[96];                       // Tag.BODY
    entity_1 = 26;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_9 = 6;                            // Tag.BODY
    entity_2 = 85;                           // Tag.BODY
    if(entity_9 < entity_1){                 // Tag.BODY
    entity_9 = 29;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 76;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_9] = '2';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_9;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    char *entity_7 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[89];                       // Tag.BODY
    entity_8 = 40;                           // Tag.BODY
    entity_5[entity_2] = 'b';                // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_8] = 'H';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER