#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_2[80];                       // Tag.BODY
    entity_8 = 71;                           // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    if(entity_7 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 31;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_7] = 'w';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER