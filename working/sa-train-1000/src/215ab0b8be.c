#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_5[92];                       // Tag.BODY
    entity_4 = 75;                           // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    char entity_2[70];                       // Tag.BODY
    entity_7 = 55;                           // Tag.BODY
    entity_3 = 37;                           // Tag.BODY
    if (entity_9 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 78;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_3] = 'H';                // Tag.BUFWRITE_TAUT_SAFE
    while(entity_7 < entity_9){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_7] = 't';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER