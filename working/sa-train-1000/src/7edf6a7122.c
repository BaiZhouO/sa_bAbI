#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_3[73];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_4 = 69;                           // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    if(entity_5 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 64;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_5] = 'I';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER