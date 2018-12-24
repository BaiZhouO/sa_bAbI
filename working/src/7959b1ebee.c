#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_2 = 33;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_6[36];                       // Tag.BODY
    entity_8 = 52;                           // Tag.BODY
    char entity_9[54];                       // Tag.BODY
    entity_3 = 34;                           // Tag.BODY
    if (entity_5 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 38;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_3 < entity_5){              // Tag.BODY
    entity_3++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_3] = 'r';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_3;                    // Tag.POINTER_DEC
    entity_6[entity_2] = 'e';                // Tag.BUFWRITE_TAUT_SAFE
    int entity_7;                            // Tag.BODY
    char *entity_1 = (char *)(entity_0 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_4[77];                       // Tag.BODY
    entity_7 = 33;                           // Tag.BODY
    entity_4[entity_7] = 'Z';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER