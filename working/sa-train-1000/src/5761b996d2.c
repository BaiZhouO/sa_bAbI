#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_6[17];                       // Tag.BODY
    entity_7 = 6;                            // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 83;                           // Tag.BODY
    if (entity_3 < entity_9){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 45;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_7 < entity_3){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_7] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER