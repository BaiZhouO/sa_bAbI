#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_2[57];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 6;                                        // Tag.BODY
    char entity_9[36];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_3 = 94;                                       // Tag.BODY
    if (entity_7 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 85;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 95; entity_0 < entity_7; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_0] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_2[entity_3] = 'D';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_4 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER