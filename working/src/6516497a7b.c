#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_6[42];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_7[51];                       // Tag.BODY
    entity_1 = 5;                            // Tag.BODY
    entity_9 = 12;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    entity_2 = 51;                           // Tag.BODY
    if (entity_3 < entity_1){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 13;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_3){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    entity_7[entity_2] = 'E';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_6[entity_9] = 'D';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER