#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_1[78];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_2 = 30;                           // Tag.BODY
    entity_8 = 19;                           // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    if (entity_9 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 71;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_9){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_2] = 'a';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER