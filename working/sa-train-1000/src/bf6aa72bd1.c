#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_9 = 57;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    entity_2 = 42;                           // Tag.BODY
    char entity_7[39];                       // Tag.BODY
    if (entity_4 < entity_9){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 7;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_2 < entity_4){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_2] = 'b';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER