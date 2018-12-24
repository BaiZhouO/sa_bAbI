#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_6[33];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_2[20];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_5 = 68;                                       // Tag.BODY
    entity_1 = 44;                                       // Tag.BODY
    for(entity_7 = 86; entity_7 < entity_5; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_7] = 'w';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_6[entity_1] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = &entity_7;                                // Tag.POINTER_DEC
    int entity_4;                                        // Tag.BODY
    char *entity_9 = (char *)(entity_8 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[86];                                   // Tag.BODY
    entity_4 = 1;                                        // Tag.BODY
    entity_3[entity_4] = 'Q';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER