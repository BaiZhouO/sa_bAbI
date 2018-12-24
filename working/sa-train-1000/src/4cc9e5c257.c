#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_5[79];                       // Tag.BODY
    entity_7 = 55;                           // Tag.BODY
    if(entity_8 < entity_7){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 13;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_8] = 'g';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER