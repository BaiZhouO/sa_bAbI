#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_3[81];                       // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_9 = 76;                           // Tag.BODY
    entity_4 = 91;                           // Tag.BODY
    if (entity_7 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 23;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_7){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_9] = 'T';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER