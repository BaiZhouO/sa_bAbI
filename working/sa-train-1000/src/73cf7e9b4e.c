#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_1[11];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 12;                           // Tag.BODY
    entity_2 = 30;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 24;                           // Tag.BODY
    char entity_5[29];                       // Tag.BODY
    while(entity_2 < entity_7){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_2] = 'o';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1[entity_8] = 'X';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER