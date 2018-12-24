#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_1[43];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 41;                           // Tag.BODY
    entity_3 = 8;                            // Tag.BODY
    if(entity_3 < entity_6){                 // Tag.BODY
    entity_3 = 88;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 98;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_3] = 'M';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER