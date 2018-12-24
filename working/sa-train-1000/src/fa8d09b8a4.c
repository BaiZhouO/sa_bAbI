#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    char entity_6[86];                       // Tag.BODY
    entity_7 = 42;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 59;                           // Tag.BODY
    if(entity_4 < entity_7){                 // Tag.BODY
    entity_4 = 2;                            // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 71;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_4] = 'K';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER