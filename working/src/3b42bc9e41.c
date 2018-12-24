#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[20];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_5[66];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_2 = 79;                                       // Tag.BODY
    entity_4 = 69;                                       // Tag.BODY
    char entity_9[0];                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    entity_3 = 39;                                       // Tag.BODY
    if (entity_1 < entity_4){                            // Tag.BODY
    entity_7[entity_2] = 'F';                            // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                             // Tag.BODY
    entity_1 = 97;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 28; entity_6 < entity_1; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_6] = 'A';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_9[entity_3] = 'T';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_8 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER