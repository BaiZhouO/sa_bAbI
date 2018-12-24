#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_2[85];                                   // Tag.BODY
    entity_9 = 37;                                       // Tag.BODY
    char entity_4[76];                                   // Tag.BODY
    entity_0 = 89;                                       // Tag.BODY
    for(entity_6 = 98; entity_6 < entity_9; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_0] = 'B';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_6] = 'Q';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_5 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_8[89];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 91;                                       // Tag.BODY
    entity_8[entity_3] = '1';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER