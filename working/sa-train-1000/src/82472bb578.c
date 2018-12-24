#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_6[66];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 4;                            // Tag.BODY
    entity_8 = 31;                           // Tag.BODY
    if(entity_8 < entity_3){                 // Tag.BODY
    entity_8 = 31;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 95;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_8] = 'D';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[72];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 76;                           // Tag.BODY
    entity_0[entity_5] = 'f';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER