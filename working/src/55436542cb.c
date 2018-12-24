#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_6[63];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_0 = 45;                           // Tag.BODY
    entity_3 = 48;                           // Tag.BODY
    if(entity_3 < entity_0){                 // Tag.BODY
    entity_3 = 32;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 35;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_3] = 'n';                // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER