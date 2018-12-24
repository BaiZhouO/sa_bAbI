#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 21;                           // Tag.BODY
    char entity_8[14];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_1 = 83;                           // Tag.BODY
    entity_0 = 38;                           // Tag.BODY
    char entity_5[97];                       // Tag.BODY
    if(entity_1 < entity_0){                 // Tag.BODY
    entity_1 = 43;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 82;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = '7';                // Tag.BUFWRITE_COND_UNSAFE
    entity_5[entity_3] = 'u';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER