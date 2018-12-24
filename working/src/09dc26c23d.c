#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_8[35];                       // Tag.BODY
    entity_7 = 53;                           // Tag.BODY
    entity_5 = 99;                           // Tag.BODY
    if (entity_4 < entity_7){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 8;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_4){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_5] = 'I';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_9 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER