#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_0[18];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 51;                           // Tag.BODY
    entity_2 = 55;                           // Tag.BODY
    char entity_7[60];                       // Tag.BODY
    entity_5 = 23;                           // Tag.BODY
    if(entity_2 < entity_8){                 // Tag.BODY
    entity_2 = 89;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 7;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_2] = 'J';                // Tag.BUFWRITE_COND_SAFE
    entity_0[entity_5] = 'z';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_3 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER