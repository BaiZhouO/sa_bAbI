#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_9[96];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_8 = 6;                            // Tag.BODY
    entity_5 = 20;                           // Tag.BODY
    if (entity_4 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 90;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_4){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_5] = 'w';                // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER