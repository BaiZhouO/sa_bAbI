#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_4[73];                       // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    char entity_1[54];                       // Tag.BODY
    entity_5 = 94;                           // Tag.BODY
    entity_8 = 73;                           // Tag.BODY
    entity_2 = 10;                           // Tag.BODY
    if (entity_0 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 33;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_0){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_5] = 'd';                // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_2] = 'H';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER