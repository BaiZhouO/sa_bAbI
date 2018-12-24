#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_4[7];                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_8 = 31;                                       // Tag.BODY
    char entity_2[33];                                   // Tag.BODY
    char entity_1[92];                                   // Tag.BODY
    entity_9 = 42;                                       // Tag.BODY
    entity_3 = 88;                                       // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    entity_2[entity_3] = 'a';                            // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_5 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 26;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_8] = 'W';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_7 = 39; entity_7 < entity_5; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_7] = 'y';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_0 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER