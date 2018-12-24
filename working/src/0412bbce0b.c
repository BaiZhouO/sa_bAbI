#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_6 = 52;                           // Tag.BODY
    char entity_9[50];                       // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    entity_1 = 58;                           // Tag.BODY
    if (entity_3 < entity_6){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 5;                            // Tag.BODY
    }                                        // Tag.BODY
    while(entity_1 < entity_3){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_1] = 'G';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_2;                            // Tag.BODY
    entity_2 = 82;                           // Tag.BODY
    char entity_7[78];                       // Tag.BODY
    entity_7[entity_2] = '8';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER