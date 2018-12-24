#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_2 = 33;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_7[69];                                   // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    if (entity_0 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 22;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 98; entity_9 < entity_0; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_9] = 'g';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_9;                                // Tag.POINTER_DEC
    char entity_3[42];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char *entity_5 = (char *)(entity_6 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 70;                                       // Tag.BODY
    entity_3[entity_1] = '6';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER