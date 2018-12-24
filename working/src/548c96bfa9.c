#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_5[31];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 8;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 5;                            // Tag.BODY
    if(entity_2 < entity_6){                 // Tag.BODY
    entity_2 = 43;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 18;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_2] = 's';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_4 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER