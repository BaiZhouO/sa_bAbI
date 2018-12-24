#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_3[91];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 57;                           // Tag.BODY
    entity_4 = 63;                           // Tag.BODY
    if(entity_6 < entity_4){                 // Tag.BODY
    entity_6 = 67;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 47;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_6] = '1';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_6;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    entity_0 = 64;                           // Tag.BODY
    char *entity_5 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_2[1];                        // Tag.BODY
    entity_2[entity_0] = 'z';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER