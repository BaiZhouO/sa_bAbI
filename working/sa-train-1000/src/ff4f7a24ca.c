#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_3[26];                                   // Tag.BODY
    char entity_2[28];                                   // Tag.BODY
    char entity_1[91];                                   // Tag.BODY
    entity_8 = 62;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_0 = 85;                                       // Tag.BODY
    entity_5 = 89;                                       // Tag.BODY
    if (entity_9 < entity_0){                            // Tag.BODY
    entity_2[entity_8] = 'B';                            // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                             // Tag.BODY
    entity_9 = 37;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 13; entity_4 < entity_9; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_5] = 'U';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_4] = 'R';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_7 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER