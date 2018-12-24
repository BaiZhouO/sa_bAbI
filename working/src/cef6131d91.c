#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_1 = 93;                                       // Tag.BODY
    entity_5 = 5;                                        // Tag.BODY
    char entity_7[75];                                   // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    char entity_2[50];                                   // Tag.BODY
    entity_2[entity_5] = 't';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_9;                                        // Tag.BODY
    if (entity_3 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 9;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 53; entity_9 < entity_3; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_9] = 'Z';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_9;                                // Tag.POINTER_DEC
    int entity_0;                                        // Tag.BODY
    char *entity_4 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0 = 6;                                        // Tag.BODY
    char entity_6[19];                                   // Tag.BODY
    entity_6[entity_0] = 'W';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER