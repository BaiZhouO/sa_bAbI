#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[21];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_3 = 77;                           // Tag.BODY
    entity_0 = 58;                           // Tag.BODY
    if (entity_5 < entity_3){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 20;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_0 < entity_5){              // Tag.BODY
    entity_0++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_0] = 'p';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_0;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    char entity_7[75];                       // Tag.BODY
    char *entity_9 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 4;                            // Tag.BODY
    entity_7[entity_1] = 'i';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER