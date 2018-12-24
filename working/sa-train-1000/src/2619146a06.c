#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_4[2];                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 71;                                       // Tag.BODY
    for(entity_8 = 51; entity_8 < entity_1; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_8] = 'G';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_8;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    char entity_2[16];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_7 = 31;                                       // Tag.BODY
    entity_2[entity_7] = 'r';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_6 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[69];                                   // Tag.BODY
    entity_5 = 85;                                       // Tag.BODY
    entity_9[entity_5] = 'o';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER