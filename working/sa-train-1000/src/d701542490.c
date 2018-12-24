#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_4[30];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 45;                           // Tag.BODY
    entity_9 = 30;                           // Tag.BODY
    while(entity_9 < entity_3){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_9] = 'V';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_9;                    // Tag.POINTER_DEC
    char entity_1[26];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    char *entity_7 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0 = 50;                           // Tag.BODY
    entity_1[entity_0] = '8';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER