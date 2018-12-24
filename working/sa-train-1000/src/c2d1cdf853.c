#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_5[14];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_7 = 44;                           // Tag.BODY
    entity_0 = 40;                           // Tag.BODY
    char entity_2[93];                       // Tag.BODY
    entity_4 = 7;                            // Tag.BODY
    if(entity_4 < entity_0){                 // Tag.BODY
    entity_4 = 91;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 84;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_7] = 'B';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_4] = 'w';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER