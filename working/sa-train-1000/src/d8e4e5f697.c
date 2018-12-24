#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[41];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_6[23];                       // Tag.BODY
    entity_0 = 46;                           // Tag.BODY
    entity_8 = 48;                           // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 76;                           // Tag.BODY
    entity_4[entity_5] = 'N';                // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_8 < entity_0){                 // Tag.BODY
    entity_8 = 23;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 51;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_8] = 'Z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER