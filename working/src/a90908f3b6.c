#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_5[14];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = 48;                           // Tag.BODY
    entity_4 = 25;                           // Tag.BODY
    while(entity_1 < entity_4){              // Tag.BODY
    entity_1++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_1] = 'Z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_1;                    // Tag.POINTER_DEC
    char entity_7[1];                        // Tag.BODY
    char *entity_2 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_0;                            // Tag.BODY
    entity_0 = 36;                           // Tag.BODY
    entity_7[entity_0] = 'C';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER