#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_7[32];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    entity_1 = 16;                                       // Tag.BODY
    if (entity_0 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 73;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 36; entity_9 < entity_0; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_9] = 'i';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_9;                                // Tag.POINTER_DEC
    int entity_5;                                        // Tag.BODY
    entity_5 = 91;                                       // Tag.BODY
    char entity_2[42];                                   // Tag.BODY
    char *entity_4 = (char *)(entity_8 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2[entity_5] = 'C';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER