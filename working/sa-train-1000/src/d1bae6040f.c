#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_1[51];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_3 = 86;                           // Tag.BODY
    char entity_7[73];                       // Tag.BODY
    entity_4 = 6;                            // Tag.BODY
    char entity_0[76];                       // Tag.BODY
    entity_6 = 7;                            // Tag.BODY
    entity_9 = 20;                           // Tag.BODY
    if(entity_4 < entity_3){                 // Tag.BODY
    entity_4 = 45;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 35;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_4] = 'e';                // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0[entity_9] = 's';                // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_6] = '4';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER