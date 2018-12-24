#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_7[72];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_3[4];                        // Tag.BODY
    entity_4 = 57;                           // Tag.BODY
    entity_5 = 14;                           // Tag.BODY
    entity_8 = 25;                           // Tag.BODY
    while(entity_5 < entity_4){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_5] = 'J';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_5;                    // Tag.POINTER_DEC
    int entity_2;                            // Tag.BODY
    entity_7[entity_8] = 'v';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_6 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[37];                       // Tag.BODY
    entity_2 = 2;                            // Tag.BODY
    entity_9[entity_2] = 'a';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER