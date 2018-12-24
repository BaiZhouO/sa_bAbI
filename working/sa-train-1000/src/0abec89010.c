#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_4 = 72;                           // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    char entity_9[36];                       // Tag.BODY
    entity_5 = 34;                           // Tag.BODY
    if (entity_6 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 1;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_6){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_5] = 'X';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER