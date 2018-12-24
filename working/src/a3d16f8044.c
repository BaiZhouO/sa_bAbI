#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_6[68];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_2 = 62;                           // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    if(entity_9 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 62;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_9] = 'K';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER