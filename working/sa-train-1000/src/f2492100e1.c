#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_1 = 99;                           // Tag.BODY
    entity_6 = 15;                           // Tag.BODY
    char entity_4[10];                       // Tag.BODY
    if(entity_1 < entity_6){                 // Tag.BODY
    entity_1 = 24;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 86;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_1] = 'U';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_1;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char *entity_7 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 53;                           // Tag.BODY
    char entity_2[26];                       // Tag.BODY
    entity_2[entity_9] = 'M';                // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_3[14];                       // Tag.BODY
    entity_0 = 78;                           // Tag.BODY
    entity_3[entity_0] = 'G';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER