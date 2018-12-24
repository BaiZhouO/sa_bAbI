#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    char entity_1[14];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_8 = 18;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    entity_4 = 5;                            // Tag.BODY
    char entity_7[89];                       // Tag.BODY
    entity_3 = 4;                            // Tag.BODY
    if (entity_0 < entity_8){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 28;                           // Tag.BODY
    entity_1[entity_3] = 'C';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    while(entity_4 < entity_0){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_4] = 'Q';                // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_2 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER