#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 9;                            // Tag.BODY
    entity_5 = 97;                           // Tag.BODY
    char entity_1[56];                       // Tag.BODY
    if(entity_4 < entity_5){                 // Tag.BODY
    entity_4 = 36;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 57;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_4] = 'z';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_4;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char *entity_6 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[22];                       // Tag.BODY
    entity_3 = 63;                           // Tag.BODY
    entity_0[entity_3] = 'z';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER