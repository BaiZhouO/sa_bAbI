#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_9[20];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_3 = 30;                           // Tag.BODY
    entity_2 = 21;                           // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_1[73];                       // Tag.BODY
    entity_5 = 98;                           // Tag.BODY
    while(entity_5 < entity_3){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_5] = 'w';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_5;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    char entity_0[97];                       // Tag.BODY
    char *entity_4 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1[entity_2] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 79;                           // Tag.BODY
    entity_0[entity_7] = 'D';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER