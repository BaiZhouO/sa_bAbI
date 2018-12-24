#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    entity_7 = 30;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_3[10];                       // Tag.BODY
    entity_0 = 98;                           // Tag.BODY
    while(entity_7 < entity_0){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_7] = 'X';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_7;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    char entity_1[35];                       // Tag.BODY
    char *entity_5 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_9 = 42;                           // Tag.BODY
    entity_1[entity_9] = 'x';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER