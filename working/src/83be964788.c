#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_8[90];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 13;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    if(entity_4 < entity_0){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 83;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_4] = 'e';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_4;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_6 = 68;                           // Tag.BODY
    char *entity_1 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5 = 74;                           // Tag.BODY
    char entity_3[96];                       // Tag.BODY
    char entity_9[80];                       // Tag.BODY
    entity_3[entity_6] = 'Q';                // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_5] = 'K';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER