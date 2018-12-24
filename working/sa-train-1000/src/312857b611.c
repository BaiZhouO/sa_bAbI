#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_9[3];                                    // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_8[62];                                   // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_1 = 68;                                       // Tag.BODY
    entity_0 = 30;                                       // Tag.BODY
    if (entity_7 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 57;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 90; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_5] = '7';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_0] = '5';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_4 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER