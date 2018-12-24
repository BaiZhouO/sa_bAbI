#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_3[30];                       // Tag.BODY
    char entity_1[9];                        // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_4[94];                       // Tag.BODY
    entity_8 = 89;                           // Tag.BODY
    entity_7 = 49;                           // Tag.BODY
    entity_2 = 51;                           // Tag.BODY
    entity_9 = 90;                           // Tag.BODY
    while(entity_8 < entity_7){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_8] = 'n';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_8;                    // Tag.POINTER_DEC
    entity_4[entity_2] = 'T';                // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_9] = 'C';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_6 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER