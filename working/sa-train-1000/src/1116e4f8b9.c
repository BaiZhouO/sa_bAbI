#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_1[96];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_0[55];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_3[93];                       // Tag.BODY
    entity_7 = 58;                           // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    entity_6 = 5;                            // Tag.BODY
    entity_5 = 9;                            // Tag.BODY
    if(entity_4 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 7;                            // Tag.BODY
    entity_3[entity_7] = 'H';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    entity_0[entity_4] = '4';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_4;                    // Tag.POINTER_DEC
    entity_1[entity_5] = 'S';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_2 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER