#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_8 = 60;                           // Tag.BODY
    char entity_1[37];                       // Tag.BODY
    entity_4 = 11;                           // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    if (entity_2 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 96;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_2){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_4] = 'P';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER