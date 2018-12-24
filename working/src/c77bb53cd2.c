#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_8[2];                        // Tag.BODY
    char entity_7[3];                        // Tag.BODY
    entity_4 = 31;                           // Tag.BODY
    entity_2 = 65;                           // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    if(entity_5 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8[entity_2] = 'a';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 19;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_5] = 'z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_5;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    char entity_3[44];                       // Tag.BODY
    char *entity_1 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0 = 13;                           // Tag.BODY
    entity_3[entity_0] = 'A';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER