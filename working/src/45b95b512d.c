#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[24];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 12;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 25;                           // Tag.BODY
    if(entity_4 < entity_8){                 // Tag.BODY
    entity_4 = 40;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 0;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = 'J';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER