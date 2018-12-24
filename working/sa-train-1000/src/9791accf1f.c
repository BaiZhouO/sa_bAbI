#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_0[89];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_3 = 95;                           // Tag.BODY
    char entity_1[30];                       // Tag.BODY
    entity_4 = 4;                            // Tag.BODY
    entity_2 = 43;                           // Tag.BODY
    char entity_6[33];                       // Tag.BODY
    entity_9 = 79;                           // Tag.BODY
    if(entity_4 < entity_2){                 // Tag.BODY
    entity_4 = 57;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 94;                           // Tag.BODY
    entity_1[entity_9] = 'P';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_0[entity_4] = 'e';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6[entity_3] = 'W';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER