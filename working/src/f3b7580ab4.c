#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_5[99];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 67;                           // Tag.BODY
    if(entity_2 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 88;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_2] = 'u';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER