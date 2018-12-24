#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_6[34];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 22;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 28;                           // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    char entity_4[83];                       // Tag.BODY
    if(entity_1 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 33;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_1] = 'S';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_1;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    entity_4[entity_8] = 'H';                // Tag.BUFWRITE_TAUT_SAFE
    char entity_9[37];                       // Tag.BODY
    char *entity_7 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5 = 35;                           // Tag.BODY
    entity_9[entity_5] = 'U';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER