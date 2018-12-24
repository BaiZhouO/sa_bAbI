#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_3[26];                       // Tag.BODY
    entity_2 = 72;                           // Tag.BODY
    entity_7 = 52;                           // Tag.BODY
    while(entity_7 < entity_2){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_7] = 'F';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER