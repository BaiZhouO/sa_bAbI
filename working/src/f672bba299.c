#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_7 = 31;                           // Tag.BODY
    char entity_6[6];                        // Tag.BODY
    entity_5 = 93;                           // Tag.BODY
    if(entity_5 < entity_7){                 // Tag.BODY
    entity_5 = 44;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 33;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_5] = 'i';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER