#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    entity_7 = 80;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 43;                           // Tag.BODY
    char entity_4[80];                       // Tag.BODY
    if(entity_8 < entity_7){                 // Tag.BODY
    entity_8 = 35;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 67;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_8] = 'G';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_9 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER