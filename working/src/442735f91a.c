#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[29];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_3[50];                                   // Tag.BODY
    entity_5 = 82;                                       // Tag.BODY
    entity_7 = 67;                                       // Tag.BODY
    entity_8[entity_5] = 'A';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_9 = 80; entity_9 < entity_7; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_9] = '8';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_9;                                // Tag.POINTER_DEC
    char entity_4[44];                                   // Tag.BODY
    char *entity_1 = (char *)(entity_2 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_0;                                        // Tag.BODY
    entity_0 = 88;                                       // Tag.BODY
    entity_4[entity_0] = 'k';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER