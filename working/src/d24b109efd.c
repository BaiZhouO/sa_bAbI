#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_8[59];                       // Tag.BODY
    entity_4 = 68;                           // Tag.BODY
    char entity_3[67];                       // Tag.BODY
    entity_6 = 4;                            // Tag.BODY
    entity_1 = 33;                           // Tag.BODY
    if(entity_4 < entity_1){                 // Tag.BODY
    entity_8[entity_6] = 'z';                // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 70;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 40;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_4] = 'c';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER