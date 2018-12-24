#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    entity_9 = 0;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_7[68];                       // Tag.BODY
    char entity_0[86];                       // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    entity_3 = 20;                           // Tag.BODY
    if(entity_6 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 44;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_9] = 'J';                // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_6] = '7';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_2[85];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 4;                            // Tag.BODY
    entity_2[entity_4] = '6';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER