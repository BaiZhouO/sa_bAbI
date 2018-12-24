#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 5;                            // Tag.BODY
    char entity_0[91];                       // Tag.BODY
    entity_2 = 0;                            // Tag.BODY
    entity_3 = 13;                           // Tag.BODY
    char entity_5[23];                       // Tag.BODY
    if(entity_3 < entity_6){                 // Tag.BODY
    entity_5[entity_2] = 'o';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 27;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 18;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_3] = 'a';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER