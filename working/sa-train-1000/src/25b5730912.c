#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_5 = 39;                                       // Tag.BODY
    char entity_1[10];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_7[48];                                   // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    entity_6 = 95;                                       // Tag.BODY
    if (entity_2 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 69;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 68; entity_3 < entity_2; entity_3++){ // Tag.BODY
    entity_1[entity_6] = '1';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_7[entity_3] = '4';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_3;                                // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_0 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER