#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_1[74];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_2 = 70;                                       // Tag.BODY
    char entity_7[25];                                   // Tag.BODY
    char entity_3[79];                                   // Tag.BODY
    entity_4 = 24;                                       // Tag.BODY
    entity_0 = 22;                                       // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 28;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_2] = 'G';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_5 = 58; entity_5 < entity_8; entity_5++){ // Tag.BODY
    entity_1[entity_4] = 'w';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_3[entity_5] = 'R';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER