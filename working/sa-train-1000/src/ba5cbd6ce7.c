#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    entity_4 = 71;                           // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_3[62];                       // Tag.BODY
    entity_5 = 15;                           // Tag.BODY
    while(entity_5 < entity_4){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_5] = 'M';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_5;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    char entity_1[27];                       // Tag.BODY
    entity_7 = 77;                           // Tag.BODY
    entity_1[entity_7] = 'S';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_9 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER