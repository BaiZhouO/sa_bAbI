#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_1 = 78;                           // Tag.BODY
    entity_2 = 47;                           // Tag.BODY
    char entity_9[18];                       // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    if (entity_6 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 3;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_6){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_1] = 'F';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER