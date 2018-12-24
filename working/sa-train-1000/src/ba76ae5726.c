#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    char entity_2[73];                       // Tag.BODY
    entity_1 = 44;                           // Tag.BODY
    entity_8 = 2;                            // Tag.BODY
    if (entity_9 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 17;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_9){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_8] = 'h';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER