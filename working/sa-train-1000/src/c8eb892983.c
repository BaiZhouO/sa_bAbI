#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_3[23];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_4 = 89;                                       // Tag.BODY
    entity_0 = 24;                                       // Tag.BODY
    char entity_1[38];                                   // Tag.BODY
    char entity_5[45];                                   // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_2 = 81;                                       // Tag.BODY
    if (entity_6 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 5;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 58; entity_9 < entity_6; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_9] = 'W';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_9;                                // Tag.POINTER_DEC
    entity_5[entity_0] = 'y';                            // Tag.BUFWRITE_TAUT_SAFE
    char *entity_7 = (char *)(entity_8 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1[entity_2] = 'a';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER