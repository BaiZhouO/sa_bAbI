#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_2[47];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_5 = 17;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    entity_9 = 77;                           // Tag.BODY
    if (entity_0 < entity_9){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 31;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_0){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_5] = '7';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER