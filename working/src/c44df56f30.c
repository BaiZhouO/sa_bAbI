#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_3[50];                                   // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_8 = 74;                                       // Tag.BODY
    if (entity_0 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 28;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 77; entity_9 < entity_0; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_9] = '6';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_9;                                // Tag.POINTER_DEC
    int entity_4;                                        // Tag.BODY
    char entity_1[6];                                    // Tag.BODY
    char *entity_7 = (char *)(entity_2 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 1;                                        // Tag.BODY
    entity_1[entity_4] = 'f';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER