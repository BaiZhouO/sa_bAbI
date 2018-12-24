#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_0 = 4;                            // Tag.BODY
    char entity_9[62];                       // Tag.BODY
    char entity_5[38];                       // Tag.BODY
    entity_2 = 11;                           // Tag.BODY
    entity_4 = 51;                           // Tag.BODY
    entity_5[entity_0] = 'O';                // Tag.BUFWRITE_TAUT_SAFE
    if(entity_4 < entity_2){                 // Tag.BODY
    entity_4 = 29;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 0;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_4] = 'C';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_4;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    char *entity_3 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_1[32];                       // Tag.BODY
    entity_8 = 8;                            // Tag.BODY
    entity_1[entity_8] = 'P';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER