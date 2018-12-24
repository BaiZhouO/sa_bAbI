#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_0[25];                                   // Tag.BODY
    entity_5 = 6;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_3[72];                                   // Tag.BODY
    entity_3[entity_5] = 'A';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 1;                                        // Tag.BODY
    for(entity_9 = 26; entity_9 < entity_7; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_9] = 'Z';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_9;                                // Tag.POINTER_DEC
    int entity_4;                                        // Tag.BODY
    char *entity_1 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_2[13];                                   // Tag.BODY
    entity_4 = 96;                                       // Tag.BODY
    entity_2[entity_4] = 'D';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER